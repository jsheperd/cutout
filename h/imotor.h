
#ifndef __IMOTOR
#define __IMOTOR

class IMotor {
public:
  enum directions {
    FORWARD,
    BACKWARD,
  };

  virtual void step(IMotor::directions direction) = 0;
};

#endif
