#ifndef DRIVETRAINSUBSYSTEM_H
#define DRIVETRAINSUBSYSTEM_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 * A simple subsystem for interfacing with a basic drive train
 *
 * @author josephd
 */
class DriveTrainSubsystem : public Subsystem
{
private:
public:
  DriveTrainSubsystem();
  void InitDefaultCommand();

  void Drive(float right, float left);
};

#endif
