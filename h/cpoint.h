
#ifndef __CPOINT
#define __CPOINT

class cPoint {
private:
  int x;
  int y;

public:
  cPoint(int x = 0, int y = 0);
  virtual ~cPoint();
  
  void SetX(int x);
  int GetX() const;
  void SetY(int y);
  int GetY() const;
};

inline void cPoint::SetX(int x) {
    this->x = x;
}    

inline int cPoint::GetX() const {
    return (x);
}    

inline void cPoint::SetY(int x) {
    this->y = y;
}    

inline int cPoint::GetY() const {
    return (y);
}    

#endif
