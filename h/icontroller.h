
#ifndef __ICONTROLLER
#define __ICONTROLLER

#include "idevice.h"
#include "cscript.h"

class IController {
public:
  virtual int execute(const CScript & script) = 0;
  
  virtual void register(const IDevice & device) = 0;
  virtual void unregister(const IDevice & device) = 0;
};

#endif
