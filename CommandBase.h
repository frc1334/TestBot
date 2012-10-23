#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Commands/Command.h"
#include "Subsystems/DriveTrainSubsystem.h"
#include "OI.h"

/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 */
class CommandBase : public Command
{
public:
  CommandBase(const char *name);
  CommandBase();
  static void init();
  static DriveTrainSubsystem *driveTrainSubsystem;
  static OI *oi;
};

#endif
