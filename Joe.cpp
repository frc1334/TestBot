#include "WPILib.h"

/**
 * This is a demo program showing the use of the RobotBase class.
 * The SimpleRobot class is the base of a robot application that will automatically call your
 * Autonomous and OperatorControl methods at the right time as controlled by the switches on
 * the driver station or the field controls.
 */
class RobotDemo : public SimpleRobot
{
	Jaguar left1;
	Jaguar left2;
	Jaguar right1;
	Jaguar right2;
	Joystick leftStick;
	Joystick rightStick;

public:
	RobotDemo(void):
		left1(2),
		left2(3),
		right1(9),
		right2(10),
		leftStick(1),
		rightStick(2)
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
		while (IsEnabled())
		{
			left1.Set(-(leftStick.GetY() - leftStick.GetX()));
			left2.Set(-(leftStick.GetY() - leftStick.GetX()));
			right1.Set(leftStick.GetY() + leftStick.GetX());
			right2.Set(leftStick.GetY() + leftStick.GetX());
		}
	}

	/**
	 * Runs during test mode
	 */
	void Test() {

	}
};

START_ROBOT_CLASS(RobotDemo);

