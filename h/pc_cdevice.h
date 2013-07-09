#ifndef __PC_CDEVICE
#define __PC_CDEVICE

#include "idevice.h"
#include "pc_ccom.h"

namespace PC {

class CDevice : virtual public IDevice {
private:
    CCOM port;
public:
   virtual void step(IDevice::sides side, IHead::orientations orientation, IMotor::directions direction);    
};

}

#endif //__PC_CDEVICE
