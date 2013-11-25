#include "WPILib.h"

/**
 * This is a demo program showing the use of the RobotBase class.
 * The SimpleRobot class is the base of a robot application that will automatically call your
 * Autonomous and OperatorControl methods at the right time as controlled by the switches on
 * the driver station or the field controls.
 */
class RobotDemo : public SimpleRobot
{
	Jaguar left;
	Jaguar right;
	Joystick leftstick;
	Joystick rightstick;
public:
	RobotDemo(void):
		left(1),
		right (2),
		leftstick (1),
		rightstick (2)
	{
	}

	/**
	 * Drive left & right motors for 2 seconds then stop
	 */
	void Autonomous(void)
	{
	}

	/**
	 * Runs the motors with arcade steering.
	 */
	void OperatorControl(void)
	{
        left.Set (leftstick.GetY());
        right.Set (rightstick.GetY());
	}

	/**
	 * Runs during test mode
	 */
	void Test() {

	}
};

START_ROBOT_CLASS(RobotDemo);

