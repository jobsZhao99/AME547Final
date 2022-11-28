clc;clear;
ur5_InverseDynamic=importrobot('ur5_InverseDynamic.urdf');
ur5_InverseDynamic.Gravity=[0 0 -9.81];
EventT=1.5;% sec
maxIter=50;
Iter=[maxIter,5,1];
TimeSegment=[0.01 3 4 5];
HandCommander=[0 1 0 1];
% absacles1=[0.8173 0.1314 0.9945];
absacles1=[0 0.8173 0.66];


% % sim('ur5bh.slx');
% function TargetPoint()
% end