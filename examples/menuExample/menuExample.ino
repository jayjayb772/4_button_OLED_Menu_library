#include <Custom_Menu_Library.h>

MenuParent mainMenu(3);

MenuPage mainMenuPage(2);


void setup(){
    Serial.begin(9600);
    mainMenu.addPageToArray(&mainMenuPage, 1);
    mainMenu.activate();
    MenuPage * other = mainMenu.getMenuPage();
    bool isactive = other->isActive();
    Serial.println(isactive);
    other->activate();
    isactive = other->isActive();
    Serial.println(isactive);
}

void loop(){

}
