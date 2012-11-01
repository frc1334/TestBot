#include "OI.h"
#include "Robotmap.h"

OI::OI() :
	left(LEFT_JOYSTICK), right(RIGHT_JOYSTICK)
{
}

inline float OI::getLeftDrive()
{
  return left.GetY();
}

inline float OI::getRightDrive()
{
  return right.GetY();
}
