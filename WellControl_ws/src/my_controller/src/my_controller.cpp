#include "my_controller.h"


namespace my_controller_ns {

//Controller initialization
  bool MyControllerClass::init(hardware_interface::EffortJointInterface* hw, ros::NodeHandle &n)
  {
	std::string my_joint;
	if (!n.getParam("joint", my_joint))
	{
		ROS_ERROR("Could not find joint name");
		return false;
	}
	// ROS_ASSERT("CB_Controller has been called");
	joint_ = hw->getHandle(my_joint); // throws on failure
	// command_ = joint_.getPosition();

	// Load gain using gains set on parameter server
	if (!n.getParam("gain", gain_))
	{
		ROS_ERROR("Could not find the gain parameter value");
		return false;
	}

	// Start command subscriber
	sub_command_ = n.subscribe<std_msgs::Float64>("command", 1, &MyControllerClass::setCommandCB, this);

	return true;
  }
  void MyControllerClass::setCommandCB(const std_msgs::Float64ConstPtr &msg)
  {
	  command_ = msg->data;
  }
//Controller startup
  void MyControllerClass::starting(const ros::Time& time) {

		//Get initial position to use in the control procedure
		init_pos_ = joint_.getPosition();
	}

//Controller running
  void MyControllerClass::update(const ros::Time& time, const ros::Duration& period)
  {
		//---Perform a sinusoidal motion for joint shoulder_pan_joint
            double error = command_ - joint_.getPosition();
            // double Verror=0.0-joint_.getVelocity();
            double commanded_effort = error*gain_; // 
            joint_.setCommand(commanded_effort);
		//---
  }

//Controller exiting
  void MyControllerClass::stopping(const ros::Time& time) { }

}

//Register the plugin: PLUGINLIB_EXPORT_CLASS(my_namespace::MyPlugin, base_class_namespace::PluginBaseClass)
PLUGINLIB_EXPORT_CLASS(my_controller_ns::MyControllerClass, controller_interface::ControllerBase);
