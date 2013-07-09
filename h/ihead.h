#ifndef __IHEAD
#define __IHEAD

#include "imotor.h"
#include "cpoint.h"

class IHead {
public:
    enum orientations {
      HORIZONTAL,
      VERTICAL    
  };
    
  virtual cPoint GetPosition() = 0;  
  virtual void step(orientations orientation, IMotor::directions direction) = 0;
};

#endif