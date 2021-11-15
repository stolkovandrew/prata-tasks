//---------------C++ Primer 6th ed.----------------
//--------------Chapter 10, exercise 7--------------
#include <iostream>
#include "plorg.h"

int main(){
    Plorg usual;
    std::cout << "The usual plorg looks something like that:\n";
    usual.showplorg();
    std::cout << "You can now specify your own plorg\n";
    std::cout << "Enter plorg's name:\n____________________\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    char tempName[20];
    std::cin.getline(tempName, 20);
    std::cout << "Enter plorg's Contentment Index: ";
    int tempCI;
    std::cin >> tempCI;
    Plorg custom(tempName, tempCI);
    std::cout << "Here's ypur custom plorg!\n";
    custom.showplorg();
    std::cout << "Surely the previously lonely usual plorg\nis now more content?\n";
    std::cout << "Enter new CI value for the usual plorg: ";
    std::cin >> tempCI;
    usual.setci(tempCI);
    std::cout << "Here we go! The usual plorg is now less usual\n";
    usual.showplorg();
    std::cout << "Bye!\n";
    return 0;
}
