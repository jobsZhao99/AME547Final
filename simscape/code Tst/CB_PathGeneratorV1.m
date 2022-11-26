function OutputSignal=CB_PathGenerator(Input)


%% decoder
startConfig=[Input(1) Input(2) Input(3) Input(4) Input(5) Input(6)];
YPR=[Input(7) Input(8) Input(9)];

PhaseNum=Input(10);
XYZ=zeros(PhaseNum,3);
MaxIter=zeros(PhaseNum,1);

%% Input

for i=1:PhaseNum
    XYZ(i,:)=[Input(i*4+7) Input(i*4+8) Input(i*4+9)];
    MaxIter(i,1)=Input(i*4+10);
end
%% output 
OutputSignal=zeros(166*6,1)*0.0;
Tra=zeros(165,6)*0.0;
StepNum=zeros(PhaseNum,1);
StartRow=zeros(PhaseNum+1,1);
StartRow(1)=0;
%% Solve Phase Trajectories
ur5=importrobot('ur5_InverseKinematic.urdf');
for i=1:PhaseNum
    [interpConfig,StepNum(i,1),goalConfig]=SingleIteration(ur5,XYZ(i,:).',YPR,MaxIter(i,1),startConfig);
    startConfig=goalConfig;
    StartRow(i+1)=StartRow(i)+MaxIter(i);
    NeedAdd=MaxIter(i)-StepNum(i,1);
    ComplmentArray=zeros(NeedAdd,6);
    for j=1:NeedAdd
        ComplmentArray(j,:)=interpConfig(StepNum(i,1),:);
    end
    Tra((StartRow(i,1)+1):(StartRow(i+1,1)),:)=[interpConfig;ComplmentArray];
end

%% Encoder  Publish to Simulink
OutputSignal(1:PhaseNum,1)=StepNum;

for j=1:165
    OutputSignal((6*j+1):(6*j+6),1)=Tra(j,:).';
end

end

function [interpConfigurations,StepNum,goalConfig]=SingleIteration(ur5,Local_XYZ,ypr,MaxIterations,startConfig)

Pose=[eul2rotm(ypr)*eul2rotm([-pi/2 -pi/2 0]) Local_XYZ;0 0 0 1];
ik = inverseKinematics('RigidBodyTree',ur5);
weights = [0.25 0.25 0.25 1 1 1];
initialguess = ur5.homeConfiguration;
[configSol,solnInfo] = ik('EndEffort',Pose,weights,initialguess);

goalConfig=[configSol(1).JointPosition,configSol(2).JointPosition,...
    configSol(3).JointPosition,configSol(4).JointPosition,...
    configSol(5).JointPosition,configSol(6).JointPosition];


% startConfig=[0 0 0 0 0 0];
rrtPlanner = manipulatorRRT(ur5,{});
rrtPlanner.MaxIterations=MaxIterations;
% rrt.EnableConnectHeuristic
path = plan(rrtPlanner,startConfig,goalConfig);
StepNum=size(path,1);

interpConfigurations = interpolate(rrtPlanner,path,floor((MaxIterations-StepNum)/(StepNum-1)));
StepNum=size(interpConfigurations,1);


end
