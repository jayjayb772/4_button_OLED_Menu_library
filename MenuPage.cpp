#include "Arduino.h"
#include "MenuPage.h"
#include "MenuParent.h"

MenuPage::MenuPage(int pageNumber){
    this->pageNumber = pageNumber;
    this->active = false;
}

MenuPage * MenuPage::getNextPage(){
    return this->nextPage;
}

MenuPage * MenuPage::getPreviousPage(){
    return this->previousPage;
}

bool MenuPage::isActive(){
    return this->active;
}

void MenuPage::activate(){
    this->active = true;
}

void MenuPage::deactivate(){
    this->active = false;
}
