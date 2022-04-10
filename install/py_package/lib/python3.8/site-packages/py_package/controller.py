import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from turtlesim.msg import Pose
from geometry_msgs.msg import Twist

class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('controller')
        self.subscription1 = self.create_subscription(
            Pose,
            'turtle1/pose',
            self.listener_callback,
            10)
    
        self.publisher_ = self.create_publisher(Twist, 'turtle1/cmd_vel', 10)
            
        self.subscription1  # prevent unused variable warning
        msg2 = Pose()
	msg2.x=goal_x
	msg2.y=goal_y
	
	
    def listener_callback(self,msg1):
        #self.get_logger().info('I heard: "%s"' % msg.x)
        #print("x = ", msg1.x , "   y = ",msg1.y, "    theta=", msg1.theta)
        print("goal x = ", msg1.x)
        
        msgg = Twist()
        msgg.linear.x = 1.0
        msgg.angular.z= 1.0
        self.publisher_.publish(msgg)


def main(args=None):
    rclpy.init(args=args)
    global goal_x
    global goal_y
    goal_x=input('enter x position')
    goal_y=input('enter z position')
    goal_x=float(goal_x)
    goal_y=float(goal_y)

    controller = MinimalSubscriber()

    rclpy.spin(controller)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    controller.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
