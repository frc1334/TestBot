#include "CommandBase.h"
#include "Subsystems/DriveTrainSubsystem.h"
#include "Commands/Scheduler.h"

CommandBase::CommandBase(const char *name) : Command(name)
{
}

CommandBase::CommandBase() : Command()
{
}

// Initialize a single static instance of all of your subsystems to NULL
DriveTrainSubsystem* CommandBase::driveTrainSubsystem = NULL;
OI* CommandBase::oi = NULL;

void CommandBase::init()
{
  driveTrainSubsystem = new DriveTrainSubsystem();
  oi = new OI();
}
