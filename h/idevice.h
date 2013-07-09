
#ifndef __IDEVICE
#define __IDEVICE

#include "ihead.h"

class IDevice {
public:
  enum sides {
    FRONT,
    BACK    
  };

    virtual void step(sides side, IHead::directions direction) = 0;
};

#endif
