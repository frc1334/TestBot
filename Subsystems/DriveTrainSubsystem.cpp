#include "DriveTrainSubsystem.h"
#include "../Robotmap.h"
#inlcude "../Commands/DriveTrainCommand.h"

DriveTrainSubsystem::DriveTrainSubsystem() : Subsystem("DriveTrainSubsystem")
{
}
    
void DriveTrainSubsystem::InitDefaultCommand()
{
  SetDefaultCommand(new DriveTrainCommand());
}

// this method will be used by DriveTrainCommand to actually drive
// the drive train jaguars
void Drive(float right, float left)
{
}
