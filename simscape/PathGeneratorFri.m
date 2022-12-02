function OutputSignal=PathGeneratorFri(Input)
% writematrix(Input,'input.xls','WriteMode','append');

% decoder
[startConfig,YPR,XYZ,MaxIter]=Decoder(Input);

% Solve Phase Trajectories
ur5=importrobot('ur5_withCollision.urdf');
% Vehicle Edge
% Vehicle Floor
% env = {collisionBox(0.9, 0.4, 1.8) collisionBox(1.5, 0.8, 0.3)};
% env{1}.Pose(1:3, end) = [0.3 0.8 0];
% env{2}.Pose(1:3, end) = [-0.75 0.0 -0.15-0.43];
env = {collisionBox(1.8, 0.4, 1.8) collisionBox(0.6, 0.8, 0.8) collisionBox(0.1, 0.1, 0.6)};
env{1}.Pose(1:3, end) = [0.0 0.6 0.23];
env{2}.Pose(1:3, end) = [0 0.0 -0.4];
env{3}.Pose(1:3, end) = [-0.78 0.35 0.13];
% ur5.DataFormat='row';
% writematrix(env{1}.Pose,'input.xls','WriteMode','append');
[path,StepNum]=SolveRRT(ur5,env,XYZ,YPR,MaxIter,startConfig);

% for i=1:StepNum
%     [isColliding,separationDist,witnessPts] = checkCollision(ur5,path(i,:),env);
%     writematrix(isColliding,'collision.xls','WriteMode','append');
% %     writematrix(separationDist,'collision.xls','WriteMode','append');
% %     writematrix(witnessPts,'collision.xls','WriteMode','append');
% end
OutputSignal=zeros((200+1)*6,1)*0.0;
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


% rrtPlanner.MaxIterations=5000;
rrtPlanner.MaxConnectionDistance =0.1;
rrtPlanner.ValidationDistance=0.01;
rrtPlanner.EnableConnectHeuristic=0; 
rrtPlanner.WorkspaceGoalRegionBias=0.5;
% rng(0)
path = plan(rrtPlanner,startConfig,goalConfig);
StepNum=size(path,1);
writematrix([1 StepNum;0 0],'RRT.xls','WriteMode','append');
% solnInfoTable = struct2table(solnInfo); 
% writetable(solnInfoTable,'solnInfo.xls','WriteMode','append')
% 
insertCount=floor((MaxIterations-StepNum)/(StepNum-1));
if insertCount>0
    path = interpolate(rrtPlanner,path,insertCount);
    StepNum=size(path,1);
end
% writematrix(path,'path.xls','WriteMode','append');
end
%%
function [startConfig,YPR,XYZ,MaxIter]=Decoder(Input)
startConfig=[Input(1) Input(2) Input(3) Input(4) Input(5) Input(6)];
YPR=[Input(7) Input(8) Input(9)];


XYZ=[Input(10);Input(11);Input(12)];
MaxIter=Input(13);
end