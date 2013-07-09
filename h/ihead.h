
#ifndef __IHEAD
#define __IHEAD

#include "cpoint.h"

class IHead {
public:
  enum directions {
    UP,
    DOWN,
    LEFT,
    RIGHT    
  };
    
  virtual void Reset() = 0;
  virtual cPoint GetPosition() = 0;  
  virtual void step(directions direction) = 0;
};

#endif
