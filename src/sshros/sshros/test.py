
import rclpy
from rclpy.node import Node
import paramiko
from blackboard_interfaces.msg import TaskMsg

hostname = "192.168.68.121"
username = "student"
password = "student"
port = 22


class TestSubscriber(Node):

	def __init__(self):
		super().__init__('test_subscriber')
		self.subscription = self.create_subscription(TaskMsg,'newTask',self.listener_callback,10)
		self.subscription

	def listener_callback(self, msg):
		print("msg received")
		self.get_logger().info(msg.TaskMsg)

def main(args=None):

	client = paramiko.SSHClient()
	client.load_system_host_keys()
	client.set_missing_host_key_policy(paramiko.AutoAddPolicy)

	client.connect(hostname, port=port, username=username, password=password)

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
