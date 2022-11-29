clc;clear;
ur5_InverseKinematic=importrobot('ur5_InverseKinematic.urdf');
ur5_InverseDynamic=importrobot('ur5_InverseDynamic.urdf');

ur5_InverseDynamic.Gravity=[0 0 -9.81];
% EventT=1.5;% sec
maxIter=50;
% Iter=[maxIter,5,1];
% TimeSegment=[0.01 3 4 5];
% HandCommander=[0 1 0 1];
Shelf_h=0.66;
abstacles1=[0 0.8173 Shelf_h];

% Event Table
% |Hand    |   Planner |   XYZ      |   ypr    |   t(sec) |
% Step 0 Initial
% |Lease   |   None    |   None     |   None   |   0.01   |
% Step 1 Pick
% |Grad    |   RRt     |   d_P-Off  |   d_YPR  |   3      |
% |Lease   |   None    |   d_P-Off  |   d_YPR  |   1      |
% |Grab    |   IK      |   d_P      |   d_YPR  |   1      |

% Event Table
EventTable={'lease' 'None'      [0 0 0]               [0 0 0]   0.001;
    'grab'  'RRT'       [0 0.6173 Shelf_h+0.05]    [0 0 0]   3;
    'lease' 'None'      [0 0.6173 Shelf_h+0.05]    [0 0 0]   0.2;
    'lease'  'IK-Linear' [0 0.8173 Shelf_h+0.05]    [0 0 0]   0.5;
    'grab'  'None' [0 0.8173 Shelf_h+0.05]    [0 0 0]   0.5;
    'grab'  'RRT' [0.7173 0.0 0.3]    [-pi/2 0 pi/6]   3;
    'lease'  'None' [0.7173 0.0 0.3]    [-pi/2 0 0]   0.2;
    'lease'  'IK-Linear' [0.6173 0.0 0.3]    [0 0 0]   0.5;
    'lease'  'RRT' [0.8173 0.1314 Shelf_h-0.0055]    [0 0 0]   3};

[Act_Hand,Act_Planner,Act_XYZ,Act_YPR,Act_Time]=Event2Action(EventTable);


% sim('ur5bh.slx');

