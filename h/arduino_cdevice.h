#ifndef __ARDUINO_CDEVICE
#define __ARDUINO_CDEVICE

#include "idevice.h"
#include "arduino_ccom.h"

namespace ARDUINO {

class Device : virtual public IDevice {
private:
   CCOM port;
   CHead heads[2]; 
public:
   virtual void step(IDevice::sides side, IHead::orientations orientation, IMotor::directions direction);    
  
  void Execute();
};

}

#endif //__ARDUINO_CDEVICE
