#include "TankDriveCommand.h"

TankDriveCommand::TankDriveCommand()
{
  Requires(tankDriveSubsystem);
}

// Called just before this Command runs the first time
void TankDriveCommand::Initialize()
{
}

// Called repeatedly when this Command is scheduled to run
void TankDriveCommand::Execute()
{
  TankDriveSubsystem(oi->getRightDrive(), oi->getLeftDrive() * -1);
}

// Make this return true when this Command no longer needs to run execute()
// This command is a default command, so, it should never stop
bool TankDriveCommand::IsFinished()
{
  // Hence, the return false
  return false;
}

// Called once after isFinished returns true
void TankDriveCommand::End()
{
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TankDriveCommand::Interrupted()
{
}
