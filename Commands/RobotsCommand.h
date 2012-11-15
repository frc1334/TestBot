#ifndef ROBOTSCOMMAND_H
#define ROBOTSCOMMAND_H

#include "../CommandBase.h"

//@author Frank

class RobotsCommand: public CommandBase {
public:
	RobotsCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
