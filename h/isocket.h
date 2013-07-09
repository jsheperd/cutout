
#ifndef __ISOCKET
#define __ISOCKET

class ISocket {
public:
  virtual int read(char * buffer, int count) = 0;
  virtual int write(const char * buffer, int count) = 0;
};

#endif
