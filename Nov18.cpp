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
		//myRobot.SetExpiration(0.1);
	}

	/**
	 * Drive left & right motors for 2 seconds then stop
	 */
	void Autonomous(void)
	{
		//myRobot.SetSafetyEnabled(false);
		//myRobot.Drive(-0.5, 0.0); 	// drive forwards half speed
		Wait(2.0); 				//    for 2 seconds
		//myRobot.Drive(0.0, 0.0); 	// stop robot
	}

	/**
	 * Runs the motors with arcade steering.
	 */
	void OperatorControl(void)
	{
		left1.Set(leftStick.GetY());
		left2.Set(leftStick.GetY());
		right1.Set(rightStick.GetY());
		right2.Set(rightStick.GetY());

	}

	/**
	 * Runs during test mode
	 */
	void Test() {

	}
};

START_ROBOT_CLASS(RobotDemo);

