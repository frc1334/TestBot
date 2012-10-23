#include "OI.h"

OI::OI()
{
  left = new Joystick(RobotMap::LEFT_JOYSTICK);
  right = new Joystick(RobotMap::RIGHT_JOYSTICK);
}
