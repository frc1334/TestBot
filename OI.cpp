#include "OI.h"

OI::OI() 
{
	getLeftDrive()
	{
	    Joystick.GetY;
	}
	getRightDrive()
	{
		Joystick.GetX;
	}
	// Process operator interface input here.
}
    inline float OI::getLeftDrive()
	{
	    return Joystick.GetY();
	}
	inline float OT::getRightDrive()
	{
		return Joystick.GetX(); 
	}