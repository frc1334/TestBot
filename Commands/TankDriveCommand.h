#ifndef TANKDRIVECOMMAND_H
#define TANKDRIVECOMMAND_H

#include "../CommandBase.h"

/**
 * A simple tank drive command
 *
 * @author josephd
 */
class TankDriveCommand : public CommandBase
{
public:
  TankDriveCommand();
  virtual void Initialize();
  virtual void Execute();
  virtual bool IsFinished();
  virtual void End();
  virtual void Interrupted();
};

#endif
