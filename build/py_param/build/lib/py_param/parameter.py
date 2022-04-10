import rclpy
import rclpy.node

class MinimalParam(rclpy.node.Node):
    def __init__(self):
        super().__init__('minimal_param_node')
        timer_period = 2  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.declare_parameter('my_parameter', 'world')
        self.declare_parameter('my_parameter2', 2)

    def timer_callback(self):
        my_param = self.get_parameter('my_parameter').get_parameter_value().string_value
        my_param2 = self.get_parameter('my_parameter2').get_parameter_value().integer_value

        self.get_logger().info('first param %d! %s ' % my_param2 %my_param)
        #print(my_param2)
	
        #my_new_param = rclpy.parameter.Parameter(
         #   'my_parameter',
          #  rclpy.Parameter.Type.STRING,
           # 'ghani'
        #)
        #my_new_param2 = rclpy.parameter.Parameter(
         #   'my_parameter2',
          #  rclpy.Parameter.Type.INTEGER,
           # 6
        #)
        #all_new_parameters = [my_new_param,my_new_param2]
        #self.set_parameters(all_new_parameters)

def main():
    rclpy.init()
    node = MinimalParam()
    rclpy.spin(node)

if __name__ == '__main__':
    main()
