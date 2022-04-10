import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from geometry_msgs.msg import Twist



class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('minimal_publisher')
        self.publisher_ = self.create_publisher(Twist, 'turtle1/cmd_vel', 10)
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)


    def timer_callback(self):
        msg = Twist()
        msg.linear.x = x
        msg.angular.z= z
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "%s"' % msg.linear.x)



def main(args=None):
    rclpy.init(args=args)
    global goal_x
    global goal_y
    goal_x=input('enter x position')
    goal_y=input('enter z position')
    goal_x=float(goal_x)
    goal_y=float(goal_y)
    

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
