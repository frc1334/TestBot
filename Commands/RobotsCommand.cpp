#include "RobotsCommand.h"

//@author Frank

RobotsCommand::RobotsCommand() {

	Requires(robotSubsystem);
}

void RobotsCommand::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void RobotsCommand::Execute() {
    robotSubsystem->Drive(oi->GetRightStick()  *   0.5, oi->GetLeftStick() * -0.5);

}

// Make this return true when this Command no longer needs to run execute()
bool RobotsCommand::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void RobotsCommand::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void RobotsCommand::Interrupted() {
}
