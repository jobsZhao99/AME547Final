#include <controller_interface/controller.h>
#include <hardware_interface/joint_command_interface.h>
#include <pluginlib/class_list_macros.h>
#include "std_msgs/Float64.h"

namespace my_controller_ns {

	class MyControllerClass: public controller_interface::Controller<hardware_interface::EffortJointInterface>
	{
	public:
		bool init(hardware_interface::EffortJointInterface* hw, ros::NodeHandle &n);
		void update(const ros::Time& time, const ros::Duration& period);
		void starting(const ros::Time& time);
		void stopping(const ros::Time& time);
		void setCommandCB(const std_msgs::Float64ConstPtr &msg);

	private:
		hardware_interface::JointHandle joint_;
		double gain_;
		double command_=1.0;
		ros::Subscriber sub_command_;
		double init_pos_;
	};
}//my_controller_ns namespace
