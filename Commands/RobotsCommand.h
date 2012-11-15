#ifndef ROBOTSCOMMAND_H
#define ROBOTSCOMMAND_H

#include "../CommandBase.h"

//@author Frank

class ROBOTCommand: public CommandBase {
public:
	ROBOTCommand();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
