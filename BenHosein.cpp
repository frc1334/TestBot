#include "WPILib.h"

/**
 * This is a demo program showing the use of the RobotBase class.
 * The SimpleRobot class is the base of a robot application that will automatically call your
 * Autonomous and OperatorControl methods at the right time as controlled by the switches on
 * the driver station or the field controls.
 */
class RobotDemo : public SimpleRobot
{
	Jaguar motor;
	Joystick stick;
	AnalogChannel control; //sets a speed to the motor
	Encoder;
public:
	RobotDemo(void):
		motor(1),
		stick (1),
		control (1), //defining where to find the port on the sidecar
		Encoder(10,11)
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
			float controlv = control.GetVoltage();
			motor.Set(controlv/5); //get's voltage from control and divides it by 5
			double rate = Encoder.GetRate();
			double distance = Encoder.GetDistance();
			printf ("%f %F \n", rate, distance);

		}
	}

	/**
	 * Runs during test mode
	 */
	void Test() {

	}
};

START_ROBOT_CLASS(RobotDemo);

