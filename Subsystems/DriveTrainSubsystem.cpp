#include "DriveTrainSubsystem.h"
#include "../Robotmap.h"
#include "../Commands/TankDriveCommand.h"

DriveTrainSubsystem::DriveTrainSubsystem() : Subsystem("DriveTrainSubsystem"),
  rightMotor(RIGHT_MOTOR), leftMotor(LEFT_MOTOR)
{
}
    
void DriveTrainSubsystem::InitDefaultCommand()
{
  SetDefaultCommand(new TankDriveCommand());
}

// this method will be used by DriveTrainCommand to actually drive
// the drive train jaguars
void DriveTrainSubsystem::Drive(float right, float left)
{
	rightMotor.Set(right);
	leftMotor.Set(left);
}
