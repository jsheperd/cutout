
#include "cmotor.h"

CMotor::CMotor(int directionPin, int impulsePin) :
  directionPin(directionPin),
  impulsePin(impulsePin) {
}

CMotor::~CMotor() {
}

void CMotor::step(IMotor::directions direction) {
  switch (direction) {
  case IMotor::FORWARD : {
    directionPins = directionPins | (1 << directionPin);
    impulsePins = impulsePins | (1 << impulsePin);
    break;   
  }    
  case IMotor::BACKWARD : {
    directionPins = directionPins & ~(1 << directionPin);
    impulsePins = impulsePins | (1 << impulsePin);
    break;   
  }    
  }
}

void CMotor::flush() {
   ... directionPin kirak
   ... wait for 
   ...   
}