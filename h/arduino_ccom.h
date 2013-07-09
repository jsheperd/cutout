#ifndef __ARDUINO_CCOM
#define __ARDUINO_CCOM


namespace ARDUINO {

class CCOM {
private:
    int portnum;
public:
    CCOM(int portnum);
    ~CCOM();
    char read();    
    char write(char c);    
};

}

#endif //__ARDUINO_CCOM
