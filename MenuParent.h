#ifndef MenuParent_h
#define MenuParent_h

#include <Arduino.h>
#include <MenuPage.h>

class MenuParent
{
  public:
    MenuParent(int num);
    MenuPage * getMenuPage(); //Returns current page page
    MenuPage * getMenuPage(int pageNum);
    void addPageToArray(MenuPage *page, int pageNum);
    int getCurrentPage();
    void activate();
    void deactivate();
    void nextPage();
    void previousPage();

  private:
    int numOptions;
    bool active;
    int currentPage;
    MenuPage *menuPages[5];
};

#endif
