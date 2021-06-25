import rclpy
from rclpy.node import Node
from blackboard_interfaces.msg import TaskMsg

class TestSubscriber(Node):

	def __init__(self):
		super().__init__('test_subscriber')
		self.subscription = self.create_subscription(TaskMsg,'newTask',self.listener_callback,10)
		self.subscription

	def listener_callback(self, msg):
		print("msg received")
		self.get_logger().info("%s" % msg)

def main(args=None):
	rclpy.init(args=args)

	test_subscriber = TestSubscriber()
	try:
		while(True):
			print("hoi")
			rclpy.spin(test_subscriber)

	except KeyboardInterrupt:
		test_subscriber.destroy_node()
		rclpy.shutdown

if __name__ == '__main__':
	main()
