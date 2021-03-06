#include "arduino_cdevice.h"

namespace ARDUINO {

void CDevice::step(IDevice::sides side, IHead::orientations orientation, IMotor::directions direction)  {
    switch (step) {
    case IHead::LEFT : {
       motors[0].step(orientation, direction);
       break;   
    }     
    case IHead::RIGHT : {
       motors[1].step(orientation, direction);
       break;   
    }     
   }
}

void CDevice::Execute() {
  int command = port.readCommand();
  switch (command) {
  case 0x01 : {
    IDevice::sides side = port.readCommand();
    IHead::orientation orientation = port.readCommand();
    IMotor::directions direction = port.readCommand();
    step(side, orientation, direction);
    break;    
  }    
  }
}

} // End of namespace

}
 
