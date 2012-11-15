#ifndef OI_H
#define OI_H

#include "WPILib.h"

//@author Frank

class OI {
private:
    Joystick LeftJoystick,RightJoystick ;
public:
	OI();
	inline float GetRightStick()
	{ return RightJoystick.GetY(); }
	inline float GetLeftStick()
	{ return LeftJoystick.GetY(); }
};

#endif
