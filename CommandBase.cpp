#include "CommandBase.h"
#include "Subsystems/RobotSubsystem.h"
#include "Commands/Scheduler.h"

CommandBase::CommandBase(const char *Commandname) : Command(Commandname) {
}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
RobotSubsystem* CommandBase::robotSubsystem = NULL;
OI* CommandBase::oi = NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	robotSubsystem = new RobotSubsystem();
    oi = new OI();
}
