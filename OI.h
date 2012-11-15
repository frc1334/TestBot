#ifndef OI_H
#define OI_H

#include "WPILib.h"

//@author Frank

class OI {
private:
    Joystick LeftJoystick,RightJoystick ;
public:
	OI();
	inline float GetRightStick();
	inline float GetLeftStick();
};

#endif
