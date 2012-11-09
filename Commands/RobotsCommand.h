#ifndef ROBOTSCOMMAND_H
#define ROBOTSCOMMAND_H

#include "../CommandBase.h"

//@author Frank

class ExampleCommand: public CommandBase {
public:
	ExampleCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
