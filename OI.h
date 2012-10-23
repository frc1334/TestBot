#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
  Joystick* left, right;
public:
  OI();
  float getLeftDrive();
  float getRightDrive();
};

#endif
