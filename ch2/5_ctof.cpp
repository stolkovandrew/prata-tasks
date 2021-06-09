//---------------C++ Primer 6th ed.----------------
//--------------Chapter 2, exercize 5--------------
#include <iostream>

double ctof(double);

int main(){
    std::cout << "Enter the temperature in C:";     //not using ℃ here, it causes glitches with the input
    double dCel;
    std::cin >> dCel;
    double dFah = ctof(dCel);
    std::cout << dCel << "℃ is " << dFah << "℉" << std::endl;
    return 0;
}
double ctof(double cd){
    return 1.8*cd + 32;
}
