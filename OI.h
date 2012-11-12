#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
 Joystick left, right;

public:
	OI();
inline float getLeftDrive();
inline float getRightDrive();
};

#endif
