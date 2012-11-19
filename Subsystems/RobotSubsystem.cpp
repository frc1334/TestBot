#include "RobotSubsystem.h"
#include "../Commands/RobotsCommand.h"
#include "../Robotmap.h"

//@author Frank

RobotSubsystem::RobotSubsystem() : Subsystem("RobotSubsystem"),
	LeftMotor(LEFT_MOTOR), RightMotor(RIGHT_MOTOR)
{
}

void RobotSubsystem::InitDefaultCommand()
{
	SetDefaultCommand(new RobotsCommand());
}


void RobotSubsystem::Drive (float LeftJoystick)
{
    RightMotor.Set(LeftJoystick);
    LeftMotor.Set(LeftJoystick);
}
