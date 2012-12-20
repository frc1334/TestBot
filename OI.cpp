#include "OI.h"

OI::OI() 
{
	
	// Process operator interface input here.
}
    float OI::getLeftDrive()
	{
		//Get the Verticle value of input from 1 tp -1
	    return Joystick.GetY();
	}
	float OT::getRightDrive()
	{
		//Get the horizontal value of input from 1 to -1
		return Joystick.GetX(); 
	}