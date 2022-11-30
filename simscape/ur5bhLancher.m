clc;clear;
ur5_InverseKinematic=importrobot('ur5_InverseKinematic.urdf');
ur5_InverseDynamic=importrobot('ur5_InverseDynamic.urdf');

ur5_InverseDynamic.Gravity=[0 0 -9.81];
% EventT=1.5;% sec
maxIter=200;
% Iter=[maxIter,5,1];
% TimeSegment=[0.01 3 4 5];
% HandCommander=[0 1 0 1];
Shelf_h=0.66;
Vehicle_h=0.3;
abstacles1=[0 0.8173 Shelf_h];
abstacles2=[0.6173 0.1314 Vehicle_h];
% Event Table
% |Hand    |   Planner |   XYZ      |   ypr    |   t(sec) |
% Step 0 Initial
% |Lease   |   None    |   None     |   None   |   0.01   |
% Step 1 Pick
% |Grad    |   RRt     |   d_P-Off  |   d_YPR  |   3      |
% |Lease   |   None    |   d_P-Off  |   d_YPR  |   1      |
% |Grab    |   IK      |   d_P      |   d_YPR  |   1      |

% Event Table

EventTable=PickAndPlace(abstacles1,abstacles2);
[Act_Hand,Act_Planner,Act_XYZ,Act_YPR,Act_Time,Act_Lift]=Event2Action(EventTable);

function EventTable=PickAndPlace(abstacles1,abstacles2)

InitialTarget=[0.8173 0.1314 0.7645];
InitialYPR=[0 0 0];

% where to pick
Target1=abstacles1+[0 0 0.1];
YPR1=[0 0 0];
offset1=(eul2rotm(YPR1)*eul2rotm([-pi/2 -pi/2 0])*[0;0;0.2]).';

% where to place
Target2=abstacles2+[0 0 0.1];
YPR2=[0 0 0];
offset2=(eul2rotm(YPR2)*eul2rotm([-pi/2 -pi/2 0])*[0;0.0;0.2]).';

EventTable={'lease' 'None'  InitialTarget       InitialYPR   0.001 0;
    'grab'  'RRT'       Target1-offset1    YPR1   3 0;
    'lease' 'None'      Target1-offset1    YPR1   0.2 0;
    'lease'  'IK-Linear'    Target1     YPR1   0.5 0;
    'grab'  'None'          Target1     YPR1   0.5 0;
    'grab'  'RRT' InitialTarget    InitialYPR   1.5 1;
    'grab'  'RRT' Target2    YPR2   3 1;
    'lease'  'None' Target2    YPR2   0.2 1;
    'lease'  'IK-Linear' Target2-offset2    YPR2   0.5 2;
    'grab'  'None' Target2-offset2    YPR2   0.2 2;
    'grab'  'RRT' InitialTarget    InitialYPR   3 2;
     'grab'  'RRT' InitialTarget    InitialYPR   3 2};


end




% sim('ur5bh.slx');

