#include "OI.h"

//@author Frank

OI::OI():
    LeftJoystick(LEFT_JOYSTICK), RightJoystick(RIGHT_JOYSTICK)
{
inline float OI::GetLeftStick()
{
  return left.GetY();
}

inline float OI::GetRightStick()
{
  return right.GetY();
}


	}
}
