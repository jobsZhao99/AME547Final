#include <string>
#include <ros/ros.h>
#include <sensor_msgs/JointState.h>
#include <tf/transform_broadcaster.h>
 
int main(int argc, char** argv) {
    ros::init(argc, argv, "state_publisher");
    ros::NodeHandle n;
    //发布joint_states节点
    ros::Publisher joint_pub = n.advertise<sensor_msgs::JointState>("joint_states", 1);
    tf::TransformBroadcaster broadcaster;
    ros::Rate loop_rate(30);
 
    const double degree = M_PI/180;
 
    // 机器人模型的关节运动变量
    double theta1= 0, theta2= 0, theta3= 0, theta4= 0, theta5= 0 ,theta6 = 0;
    // 发布odom坐标到机器人坐标的TF变换
    geometry_msgs::TransformStamped odom_trans;
    sensor_msgs::JointState joint_states;
    odom_trans.header.frame_id = "odom"; //odom名称
    odom_trans.child_frame_id = "base_footprint"; //机器人地盘
 
    while (ros::ok()) {
        //update joint_state
        joint_states.header.stamp = ros::Time::now();
        joint_states.name.resize(6);  //定义6个运动节点
        joint_states.position.resize(6);
        joint_states.name[0] ="shoulder_pan_joint"; 
        joint_states.position[0] = theta1;
        joint_states.name[1] ="shoulder_lift_joint"; 
        joint_states.position[1] = theta2;
        joint_states.name[2] ="elbow_joint"; 
        joint_states.position[2] = theta3;
 
	    joint_states.name[3] ="wrist_1_join"; 
        joint_states.position[3] = theta4;
	    joint_states.name[4] ="wrist_2_joint";
        joint_states.position[4] = theta5;
	    joint_states.name[5] ="wrist_3_join";
        joint_states.position[5] = theta6;
   
        // update transform
        // (moving in a circle with radius)
        // odom_trans.header.stamp = ros::Time::now();
        // odom_trans.transform.translation.x = cos(angle);
        // odom_trans.transform.translation.y = sin(angle);
        // odom_trans.transform.translation.z = 0.0;
        // odom_trans.transform.rotation = tf::createQuaternionMsgFromYaw(angle);
 
        //send the joint state and transform
        joint_pub.publish(joint_states); //发布joint_states消息
        // broadcaster.sendTransform(odom_trans);  //发布tf变换
 
 
	    // //以下为更新机器人可动节点的状态
        // arm2_arm1 += arm2_arm1_inc;
        // if (arm2_arm1<-1.5 || arm2_arm1>1.5) arm2_arm1_inc *= -1;
        
		//   arm1_armbase += arm1_armbase_inc;            
        // if (arm1_armbase>1.2 || arm1_armbase<-1.0) arm1_armbase_inc *= -1;
 
        // base_arm += base_arm_inc;
        // if (base_arm>1. || base_arm<-1.0) base_arm_inc *= -1;
		
		// angle += degree/4;
 
        // This will adjust as needed per iteration
        loop_rate.sleep();
    }
    
    return 0;
}