#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
  Joystick left, right;
public:
  OI();
  inline float getLeftDrive()
  { return left.GetY(); }
  inline float getRightDrive()
  { return right.GetY(); }
 };

#endif
