#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "turtlesim/msg/pose.hpp"
#include <iostream>
#include "geometry_msgs/msg/twist.hpp"

using namespace std;
using placeholders::_1;

bool goToWaypoint = true;
float x_goal,y_goal;
const double PI = 3.141592654;
const double K_l=0.5;
const double K_a=0.5;
const double distanceTolerance = 0.1;
const double angleTolerance = 0.1;

auto waypointGoal = turtlesim::msg::Pose();
auto current = turtlesim::msg::Pose();
auto velCommand = geometry_msgs::msg::Twist();


double getDistanceToWaypoint() {
  return sqrt(pow(waypointGoal.x - current.x, 2) + pow(
    waypointGoal.y - current.y, 2));
}

double getHeadingError() {
 
  double deltaX = waypointGoal.x - current.x;
  double deltaY = waypointGoal.y - current.y;
  double waypointHeading = atan2(deltaY, deltaX);
  double headingError = waypointHeading - current.theta;   
   
  if (headingError > PI) {
    headingError = headingError - (2 * PI);
  } 
  if (headingError < -PI) {
    headingError = headingError + (2 * PI);
  } 
   
  return headingError;
}

void setVelocity() { 
  double distanceToWaypoint = getDistanceToWaypoint();
  double headingError = getHeadingError();
   if (goToWaypoint== true && abs(distanceToWaypoint) > distanceTolerance) {
    
    // If the robot's heading is off, fix it.
      if (abs(headingError) > angleTolerance) {
        velCommand.linear.x = 0.0;
        velCommand.angular.z = K_a  * headingError;
    }
    
      else {
        velCommand.linear.x = K_l * distanceToWaypoint;
        velCommand.angular.z = 0.0;    
    }
  }
  else {
     cout << "Goal has been reached!" << endl << endl;
     velCommand.linear.x = 0.0;
     velCommand.angular.z = 0.0;
     goToWaypoint = false; 
     exit(0);
  }
}


class MinimalSubscriber : public rclcpp::Node
{
  public:
    MinimalSubscriber() : Node("minimal_subscriber")
    {
      publishername_ = this->create_publisher<geometry_msgs::msg::Twist>("turtle1/cmd_vel", 10);
      subscription_ = this->create_subscription<turtlesim::msg::Pose>(
      "turtle1/pose", 10, std::bind(&MinimalSubscriber::topic_callback, this, _1));
    }

  private:
    void topic_callback(const turtlesim::msg::Pose::SharedPtr current2) const
    { 
      current.x=current2->x;
      current.y=current2->y;
      current.theta=current2->theta;
      waypointGoal.x=x_goal;
      waypointGoal.y=y_goal;
      
      setVelocity();
     
      publishername_->publish(velCommand);
       
      if(goToWaypoint == true){
         cout << "Current (x,y) = " << "(" << current.x << "," << current.y << ")"
         << endl
         << "Waypoint (x,y) = " << "(" << waypointGoal.x << ","
         << waypointGoal.y << ")"
         << endl
         << "Distance to Waypoint = " << getDistanceToWaypoint() << " m"
         << endl
         << "Linear Velocity (x) = " << velCommand.linear.x << " m/s"
         << endl << endl;
        }
    }
    rclcpp::Subscription<turtlesim::msg::Pose>::SharedPtr subscription_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publishername_;
};

int main(int argc, char * argv[])
{
  cout << "enter x goal"<<endl;
  cin >> x_goal; 
  cout<< "enter y goal"<<endl;
  cin >> y_goal;
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalSubscriber>());
  rclcpp::shutdown();
  return 0;
}
