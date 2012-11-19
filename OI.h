#ifndef OI_H
#define OI_H

#include "WPILib.h"

//@author Frank

class OI {
private:
    Joystick LeftJoystick ;
public:
	OI();
	inline float GetLeftStick()
	{ return LeftJoystick.GetY(); }
};

#endif
