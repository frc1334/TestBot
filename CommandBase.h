#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include "Commands/Command.h"
#include "Subsystems/RobotSubsystem.h"
#include "OI.h"


/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.Robotsubsystem
 */
class CommandBase: public Command {
public:
	CommandBase(const char *Commandname);
	CommandBase();
	static void init();
	static RobotSubsystem *robotSubsystem;
	static OI *oi;
};

#endif
