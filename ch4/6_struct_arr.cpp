//---------------C++ Primer 6th ed.----------------
//--------------Chapter 4, exercize 6--------------
#include <iostream>

struct CandyBar
{
    char charrName[20];
    float fWeight;
    int nCal;
};

int main(){
    CandyBar snacks[3];
    snacks[0] = {"Crusty fingers", 45.8, 144};
    snacks[1] = {"Cheesecake", 265.0, 820};
    snacks[2] = {"Honeycomb", 135.6, 420};
    std::cout << "1st snack's name: " << snacks[0].charrName << "\n          weight: " << snacks[0].fWeight << "\n   calorie count: " << snacks[0].nCal << std::endl;
    std::cout << "2nd snack's name: " << snacks[1].charrName << "\n          weight: " << snacks[1].fWeight << "\n   calorie count: " << snacks[1].nCal << std::endl;
    std::cout << "3rd snack's name: " << snacks[2].charrName << "\n          weight: " << snacks[2].fWeight << "\n   calorie count: " << snacks[2].nCal << std::endl;
    return 0;
}