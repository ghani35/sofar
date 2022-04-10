import math
import rclpy
from rclpy.node import Node

from geometry_msgs.msg import Twist
from turtlesim.msg import Pose

class TurtlePositionController(Node):

    def __init__(self, x, y):
        super().__init__('turtle_position_controller')

        # Define publishers and subscribers
        self.publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.subscriber = self.create_subscription(Pose, 'turtle1/pose', self.pose_callback, 10)
        self.timer = self.create_timer(0.01, self.control_cycle)

        # Define state and goal pose variables
        self.state = Pose()
        self.goal_x = x
        self.goal_y = y

        # Controller weights
        self.K = 0.5
        self.Ka = 5

        self.goal_reached = False
        
    # Callback executed to store current turtle state
    def pose_callback(self, msg):
        self.state.x = msg.x
        self.state.y = msg.y
        self.state.theta = msg.theta


    # Helper function to compute euclidean distance from goal
    def dist_to_goal(self):
        return math.sqrt(
            (self.state.x - self.goal_x)**2 + 
            (self.state.y - self.goal_y)**2
        )

    # Helper function to compute steering angle to reach goal
    def angular_rotation(self):
        return math.atan2(
            self.goal_y - self.state.y,  
            self.goal_x - self.state.x
        ) - self.state.theta
        
    # Timer callback - executed every 0.01 seconds
    def control_cycle(self):
        # Compute pose error
        e_pos = self.dist_to_goal()
        e_ang = self.angular_rotation()

        if not self.goal_reached:
            # Generate control input based on control law
            speed =  self.K * e_pos
            rotation = self.Ka * e_ang

            # Publish control message 
            cmd_vel = Twist()
            cmd_vel.linear.x = speed
            cmd_vel.angular.z = rotation
            self.publisher.publish(cmd_vel)

            # If goal reached, cancel timer and prompt new target
            if e_pos < 10e-2:
                if not self.goal_reached:
                    print("Goal reached")
                self.goal_reached = True
                self.timer.cancel()
                self.prompt_new_target()

    def prompt_new_target(self):
        print("-----------------------")
        print("Insert new target: ")
        x = input(f"x: ")
        x = float(x)
        y = input(f"y: ")
        y = float(y)

        self.goal_x = x
        self.goal_y = y
        self.goal_reached = False
        
        self.timer = self.create_timer(0.01, self.control_cycle)
        

def main(args=None):
    rclpy.init(args=args)

    print("Insert new target: ")
    x = input(f"x: ")
    x = float(x)
    y = input(f"y: ")
    y = float(y)

    controller = TurtlePositionController(x,y)

    rclpy.spin(controller)

    controller.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

