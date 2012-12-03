#include "DriveTrainCommand.h"

DriveTrainCommand::DriveTrainCommand() {
	// Use requires() here to declare subsystem dependencies
	Requires(drivetrainsubsystem);
}

// Called just before this Command runs the first time
void DriveTrainCommand::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void DriveTrainCommand::Execute() {
	drivetrainsubsystem->Drive(oi->getRightDrive(),oi->getLeftDrive());
}

// Make this return true when this Command no longer needs to run execute()
bool DriveTrainCommand::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriveTrainCommand::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveTrainCommand::Interrupted() {
}
