//---------------C++ Primer 6th ed.----------------
//--------------Chapter 4, exercise 9--------------
#include <iostream>

struct CandyBar
{
    char charrName[20];
    float fWeight;
    int nCal;
};

int main(){
    CandyBar* p_snacks = new CandyBar[3];
    p_snacks[0] = {"Crusty fingers", 45.8, 144};
    p_snacks[1] = {"Cheesecake", 265.0, 820};
    p_snacks[2] = {"Honeycomb", 135.6, 420};
    std::cout << "1st snack's name: " << p_snacks[0].charrName << "\n          weight: " << p_snacks[0].fWeight << "\n   calorie count: " << p_snacks[0].nCal << std::endl;
    std::cout << "2nd snack's name: " << p_snacks[1].charrName << "\n          weight: " << p_snacks[1].fWeight << "\n   calorie count: " << p_snacks[1].nCal << std::endl;
    std::cout << "3rd snack's name: " << p_snacks[2].charrName << "\n          weight: " << p_snacks[2].fWeight << "\n   calorie count: " << p_snacks[2].nCal << std::endl;
    delete [] p_snacks;
    return 0;
}