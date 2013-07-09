#ifndef __PC_CCOM
#define __PC_CCOM


namespace PC {

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

#endif //__PC_CCOM
