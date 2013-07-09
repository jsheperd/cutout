
#ifndef __CMOTOR
#define __CMOTOR

#include "imotor.h"

class CMotor : virtual public IMotor {
private:
  static unsigned char directionPins;
  static unsigned char impulsePins;

  int directionPin;
  int impulsePin;
  
public:
  CMotor(int directionPin, int impulsePin);
  virtual ~CMotor();
 
  static void flush();
  
  virtual void step(IMotor::directions direction);
};

#endif
