#include "WPILib.h"
#include "Commands/Command.h"
#include "CommandBase.h"

class CommandBasedRobot : public IterativeRobot
{
private:
  virtual void RobotInit()
  {
    CommandBase::init();
  }

  virtual void TeleopInit()
  {
  }

  virtual void TeleopPeriodic()
  {
    Scheduler::GetInstance()->Run();
  }
};

START_ROBOT_CLASS(CommandBasedRobot);

