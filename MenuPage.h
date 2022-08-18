#ifndef MenuPage_h
#define MenuPage_h

#include <Arduino.h>

class MenuPage
{
  public:
    MenuPage(int pageNumber);
    MenuPage * getNextPage();
    MenuPage * getPreviousPage();
    void activate();
    void deactivate();
    bool isActive();
  private:
    int pageNumber;
    MenuPage *nextPage;
    MenuPage *previousPage;
    bool active;

};

#endif
