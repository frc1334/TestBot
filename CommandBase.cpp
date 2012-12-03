#include "CommandBase.h"
#include "Subsystems/TankDriveSubsystem.h"
#include "Commands/Scheduler.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
TankDriveSubsystem* CommandBase::tankdrivesubsystem = NULL;
OI* CommandBase::oi = NULL;

void CommandBase::init()
{
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	tankdrivesubsystem = new TankDriveSubsystem();
	
	oi = new OI();
}
