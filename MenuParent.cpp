#include "Arduino.h"
#include "MenuParent.h"
#include "MenuPage.h"

MenuParent::MenuParent(int num){
    this->numOptions = num;
    this->active = false;
    this->currentPage = 0;
}

MenuPage * MenuParent::getMenuPage(){
    return this->menuPages[this->currentPage-1];
}

MenuPage * MenuParent::getMenuPage(int pageNum){
    return this->menuPages[pageNum-1];
}

void MenuParent::addPageToArray(MenuPage * page, int pageNum){
    this->menuPages[pageNum-1] = page;
}

int MenuParent::getCurrentPage(){
    return this->currentPage+1;
}

void MenuParent::nextPage(){
    if(this->active && this->currentPage<this->numOptions){
        this->currentPage++;
    }
}

void MenuParent::previousPage(){
    if(this->active && this->currentPage>1){
        this->currentPage--;
    }
}

void MenuParent::activate(){
    this->active = true;
    this->currentPage = 1;
}

void MenuParent::deactivate(){
    this->active = false;
    this->currentPage = 0;
}
