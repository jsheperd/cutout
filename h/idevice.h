#ifndef __IDEVICE
#define __IDEVICE

#include "ihead.h"

class IDevice {
public:
    enum sides {
      LEFT,
      RIGHT    
    };

    virtual void step(sides side, IHead::orientations orientation, IMotor::directions direction) = 0;
};

#endif
