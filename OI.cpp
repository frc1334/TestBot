#include "OI.h"

OI::OI()
{
  left = new Joystick(RobotMap::LEFT_JOYSTICK);
  right = new Joystick(RobotMap::RIGHT_JOYSTICK);
}

inline float OI::getLeftDrive()
{
  return left->GetY();
}

inline float OI::getRightDrive()
{
  return right->GetY();
}
