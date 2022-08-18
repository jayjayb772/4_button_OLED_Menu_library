/*
  Morse.h - Library for flashing Morse code.
  Created by David A. Mellis, November 2, 2007.
  Released into the public domain.
*/
#ifndef Menu_h
#define Menu_h

#include <Arduino.h>

class MenuParent
{
  public:
    Morse(int pin);
    void dot();
    void dash();
  private:
    MenuPage menuPages[];
};

class MenuPage
{
  public:
    Morse(int pin);
    void dot();
    void dash();
  private:
    String options[];
    int numOptions;

};

#endif
