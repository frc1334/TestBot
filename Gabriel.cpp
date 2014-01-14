#include "WPILib.h"

/**
 * This is a demo program showing the use of the RobotBase class.
 * The SimpleRobot class is the base of a robot application that will automatically call your
 * Autonomous and OperatorControl methods at the right time as controlled by the switches on
 * the driver station or the field controls.
 */
class RobotDemo : public SimpleRobot
{
	//deffines variable:Motor (Jaguar), Joystick (stick), and AnalogChannel(TTT)
	Jaguar motortest;
	Joystick stick;
	AnalogChannel twistytwistything;

public:
	RobotDemo(void):
		//added constructors for the stuff above :P
		motortest(1),
		stick(1),
		twistytwistything(1),
		
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
			//gets voltage from TTT and puts it into the motor test (Scales before hand)
			float controlv = control.GetVoltage();
			motortest.Set(controlv/5);
        }
	}

	/**
	 * Runs during test mode
	 */
	void Test() {

	}
};
    

START_ROBOT_CLASS(RobotDemo);

