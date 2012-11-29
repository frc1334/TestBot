#ifndef DRIVETRAIN_COMMAND_H
#define DRIVETRAIN_COMMAND_H

#include "../CommandBase.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class DriveTrainCommand: public CommandBase {
public:
	DriveTrainCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
