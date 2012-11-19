#include "Robotmap.h"
#include "OI.h"

//@author Frank

OI::OI():
    LeftJoystick(LEFT_JOYSTICK)
{
inline float OI::getLeftDrive()
{
  return left.GetY();
}

inline float OI::getRightDrive()
{
  return right.GetY();
}

}

