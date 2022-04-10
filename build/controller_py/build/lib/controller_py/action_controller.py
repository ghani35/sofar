import math
import rclpy

import time 
from rclpy.node import Node
from rclpy.action import ActionServer

from geometry_msgs.msg import Twist
from turtlesim.msg import Pose
from customized_srv_msg.action import Control

from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor

class TurtlePositionController(Node):

    def __init__(self):
        super().__init__('turtle_position_controller')
        #inside the init you define all function sun/pub , actions  and variables

        # Define publishers and subscribers
        self.publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)
        self.subscriber = self.create_subscription(Pose, 'turtle1/pose', self.pose_callback, 10)
            #Define the action server 
        self._action_server = ActionServer( self,Control,'control',self.execute_callback)

        # Define state and goal pose variables
        self.state = Pose()
        self.x=0.0
        self.y=0.0
        self.goal_x = self.x   
        self.goal_y = self.y    

        # Controller weights
        self.K = 0.5
        self.Ka = 5

        self.goal_reached = False
        self.group = ReentrantCallbackGroup()
        
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
        
    

        

    def execute_callback(self, goal_handle):
        #callback of action server, if we do not use while loop it will be excuted only once 
        #because we are using while loop we need to use executors to let the position callback executes 
       self.get_logger().info('Executing goal...')
        
       while  not self.goal_reached:

        feedback_msg = Control.Feedback()

        feedback_msg.goal_distance = [0.0]

        self.x=goal_handle.request.x[0]
        self.y=goal_handle.request.x[1]
        

        e_pos = self.dist_to_goal()
        e_ang = self.angular_rotation()
        feedback_msg.goal_distance=[e_pos]
        goal_handle.publish_feedback(feedback_msg)

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
                print("e_pose")
                print(e_pos)
                if not self.goal_reached:
                    print("Goal reached")
                self.goal_reached = True
                
                
                
       goal_handle.succeed()
       result = Control.Result()
       result.status = self.goal_reached
       return result

def main(args=None):
    rclpy.init(args=args)
    try:
        talker = TurtlePositionController()
        executor = MultiThreadedExecutor(num_threads=4)
        executor.add_node(talker)
        try:
            executor.spin()
        finally:
            executor.shutdown()
        
            talker.destroy_node()
    finally:
        rclpy.shutdown()


if __name__ == '__main__':
    main()
