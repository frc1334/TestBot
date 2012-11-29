#include "DriveTrainSubsystem.h"
#include "../Commands/DriveTrainCommand.h"
#include "../Robotmap.h"

DriveTrainSubsystem::DriveTrainSubsystem() : Subsystem("DriveTrainSubsystem"), left(LEFTMOTOR), right(RIGHTMOTOR) {

}

void DriveTrainSubsystem::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	SetDefaultCommand(new DriveTrainCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
void DriveTrainSubsystem::Drive(float left, float right)
{
    this->left.Set(left*-1);
    this->right.Set(right);
}
