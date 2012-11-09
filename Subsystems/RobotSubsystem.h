#ifndef ROBOTSUBSYSTEM_H
#define ROBOTSUBSYSTEM_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

//@author Frank

class ExampleSubsystem: public Subsystem
{
private:
	Jaguar LeftMotor, RightMotor;
public:
	RobotSubsystem();
	void InitDefaultCommand();
	void Drive (float LeftJoystick, float RightJoystick);
};

#endif
