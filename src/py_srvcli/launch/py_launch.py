from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        #Node(
         #   package='turtlesim',
          #  namespace='turtlesim1',
           # executable='turtlesim_node',
            #name='sim'
        #),
        #Node(
         #   package='cpp_new',
          #  executable='talker',
        #),
        Node(
            package='py_param',
            executable='parameter',
            parameters=[
                {"my_parameter": 'abdo'},
                
                
                
            ]
        )
            
      
    ])
