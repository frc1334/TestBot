#include "RobotSubsystem.h"
#include "../Robotmap.h"

//@author Frank

RobotSubsystem::RobotSubsystem() : Subsystem("RobotSubsystem")
{
	LeftMotor(LEFT_MOTOR), RightMotor(RIGHT_MOTOR)
}

void RobotSubsystem::InitDefaultCommand()
{
	SetDefaultCommand(new DrivingCommand());
}


void RobotSubsystem::Drive (float RightJoystick, float LeftJoystick)
{
    RightMotor.Set(RightJoystick);
    LeftMotor.Set(LeftJoystick);
}
