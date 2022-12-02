function [Act_Hand,Act_Planner,Act_XYZ,Act_YPR,Act_Time,Act_Lift]=Event2Action(EventTable)
%Event2Action Transfer Event Table to Single Actions Set
%   Event Table Formmat:(cell not array)
%       |Hand    |   Planner |   XYZ      |   ypr    |   t(sec) |    IV-f
%       
%       Hand:       0-lease 1-grab
%       Planner:    {'RRT', 'IK-Linear', 'None'}
%       XYZ:        ex:[0 0 0] in row vector
%       YPR:        ex:[0 0 0] in row vector
%       During(sec)
        

disp("      Hand          Planner               XYZ               ypr        During(sec) Lift");
disp(EventTable);
% define table
HandCom_Col=1;
Planner_Col=2;
XYZ_Col=3;
YPR_Col=4;
TimeSeg_Col=5;
Lift_Col=6;

% initialize
Phase_Num=size(EventTable,1);
Act_Hand=zeros(Phase_Num,1);
Act_Planner=zeros(Phase_Num,1);
Act_XYZ=zeros(Phase_Num,3);
Act_YPR=zeros(Phase_Num,3);
Act_Time=zeros(Phase_Num,1);
Act_Lift=zeros(Phase_Num,1);
for i=1:Phase_Num
    % HandCommander
    if strcmp(EventTable(i,HandCom_Col),'grab')
        Act_Hand(i)=1;
    else
        Act_Hand(i)=0;
    end
    % PlannerCommander
    if strcmp(EventTable(i,Planner_Col),'RRT')
        Act_Planner(i)=1;
    elseif strcmp(EventTable(i,Planner_Col),'IK-Linear')
        Act_Planner(i)=2;
    elseif strcmp(EventTable(i,Planner_Col),'Linear')
        Act_Planner(i)=3;
    else
        Act_Planner(i)=0;
    end
    Act_XYZ(i,:)=cell2mat(EventTable(i,XYZ_Col));
    Act_YPR(i,:)=cell2mat(EventTable(i,YPR_Col));
    Act_Lift(i)=cell2mat(EventTable(i,Lift_Col));
    % Time Segment
    if i==1
        Act_Time(1)=EventTable{1,TimeSeg_Col};
    else
        Act_Time(i)=Act_Time(i-1)+EventTable{i,TimeSeg_Col};
    end
end


end