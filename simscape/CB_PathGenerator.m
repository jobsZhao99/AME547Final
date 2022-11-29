function OutputSignal=CB_PathGenerator(Input)


% decoder
[startConfig,YPR,XYZ,MaxIter]=Decoder(Input);

% Solve Phase Trajectories
ur5=importrobot('ur5_InverseKinematic.urdf');
env = {collisionBox(1.5, 0.02, 0.4) collisionBox(1.2, 0.8, 0.01) collisionBox(1, 0.5, 0.01)};
env{1}.Pose(1:3, end) = [0.75;0.4;-0.26];
env{2}.Pose(1:3, end) = [0.7;0;-0.43];
env{3}.Pose(1:3, end) =[0; 0.8173; -0.04];

[path,StepNum]=SolveRRT(ur5,env,XYZ,YPR,MaxIter,startConfig);
% ur5 = collisionBox(1.2,0.05,0.8);
% ur5.Pose = trvec2tform([0.6, 0.4, 0.35]);
% addFixedObstacle(ur5,'VehicleEdge')

OutputSignal=zeros((MaxIter+1)*6,1)*0.0;
OutputSignal(1,1)=StepNum;
for j=1:StepNum
    OutputSignal((6*j+1):(6*j+6),1)=path(j,:).';
end

end

%%
function [path,StepNum]=SolveRRT(ur5,env,Local_XYZ,ypr,MaxIterations,startConfig)

Pose=[eul2rotm(ypr)*eul2rotm([-pi/2 -pi/2 0]) Local_XYZ;0 0 0 1];
ik = inverseKinematics('RigidBodyTree',ur5);
% weights = [0.25 0.25 0.25 1 1 1];
weights = [0.25 0.25 0.25 10 10 10];
initialguess = ur5.homeConfiguration;
[configSol,solnInfo] = ik('EndEffort',Pose,weights,initialguess);

goalConfig=[configSol(1).JointPosition,configSol(2).JointPosition,...
    configSol(3).JointPosition,configSol(4).JointPosition,...
    configSol(5).JointPosition,configSol(6).JointPosition];


% startConfig=[0 0 0 0 0 0];
rrtPlanner = manipulatorRRT(ur5,env);
rrtPlanner.MaxIterations=MaxIterations;
rrtPlanner.MaxConnectionDistance =0.5;
% rrt.EnableConnectHeuristic
path = plan(rrtPlanner,startConfig,goalConfig);
StepNum=size(path,1);
% writematrix(path,'path.xls','WriteMode','append')
insertCount=floor((MaxIterations-StepNum)/(StepNum-1));
if insertCount~=0
    path = interpolate(rrtPlanner,path,floor((MaxIterations-StepNum)/(StepNum-1)));
    StepNum=size(path,1);
end

end
%%
function [startConfig,YPR,XYZ,MaxIter]=Decoder(Input)
startConfig=[Input(1) Input(2) Input(3) Input(4) Input(5) Input(6)];
YPR=[Input(7) Input(8) Input(9)];


XYZ=[Input(10);Input(11);Input(12)];
MaxIter=Input(13);
end