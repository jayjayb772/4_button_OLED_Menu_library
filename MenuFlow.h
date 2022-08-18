#ifndef MenuFlow_h
#define MenuFlow_h

#include <Arduino.h>

class MenuFlow
{
  public:
    Morse(int pin);
    void dot();
    void dash();
  private:
    MenuPage menuPages[];
};

#endif
