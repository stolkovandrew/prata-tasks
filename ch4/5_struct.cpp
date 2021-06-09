//---------------C++ Primer 6th ed.----------------
//--------------Chapter 4, exercize 5--------------
#include <iostream>

struct CandyBar
{
    char charrName[20];
    float fWeight;
    int nCal;
};

int main(){
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    std::cout << "Snack's name: " << snack.charrName << std::endl;
    std::cout << "Snack's weight: " << snack.fWeight << std::endl;
    std::cout << "Snack's calorie count: " << snack.nCal << std::endl;
    return 0;
}