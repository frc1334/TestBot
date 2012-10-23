#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
  Joystick* left, right;
public:
  OI();
  inline float getLeftDrive();
  inline float getRightDrive();
};

inline float OI::getLeftDrive()
{
  return left->GetY();
}

inline float OI::getRightDrive()
{
  return right->GetY();
}

#endif
