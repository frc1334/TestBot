#include "RobotsCommand.h"
#include <iostream>

//@author Frank

RobotsCommand::RobotsCommand() {

	Requires(robotSubsystem);
}

void RobotsCommand::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void RobotsCommand::Execute() {
    if (left.GetY() > Left.GetX() > 0) {
    robotSubsystem->Drive(oi->GetLeftStick()  *   1, oi->GetRightStick() * -1);
}
    if (left.GetY() > Left.GetX() < 0) {
    robotSubsystem->Drive(oi->GetLeftStick()  *   1, oi->GetRightStick() * -1);
}
    if (left.GetY() < Left.GetX() < 0) {
    robotSubsystem->Drive(oi->GetLeftStick()  *   1, oi->GetRightStick() * -1);
}
    if (left.GetY() < Left.GetX() > 0) {
    robotSubsystem->Drive(oi->GetLeftStick()  *   1, oi->GetRightStick() * -1);
}
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
