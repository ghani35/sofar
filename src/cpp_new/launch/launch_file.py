from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package="turtlesim",
            executable="turtlesim_node",
           
           
            
            parameters=[
                {"background_b": 100},
                {"background_g": 20},
                {"background_r": 255},
                
            ]
        )
    ])
    
