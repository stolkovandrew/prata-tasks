//---------------C++ Primer 6th ed.----------------
//--------------Chapter 3, exercize 2--------------
#include <iostream>

int main(){
    const int nConstConvFacFtIn = 12;
    const double dConstConvFacInM = 0.0254;
    const double dConstConvFacInvLbKg = 2.2; 
    std::cout << "Enter your height, feet first:__\b\b";
    int nInputFt;
    std::cin >> nInputFt;
    std::cout << "and now, inches:__\b\b";
    int nInputIn;
    std::cin >> nInputIn;
    std::cout << "We'll also need your weight in pounds:___\b\b\b";
    int nInputLb;
    std::cin >> nInputLb;
    double dMet = dConstConvFacInM*(nInputFt*nConstConvFacFtIn+nInputIn);
    double dKg = nInputLb/dConstConvFacInvLbKg;
    double dBmi = dKg/(dMet*dMet);
    std::cout << "Your BMI is " << dBmi;
    std::cout << "\nYour weight in kg is " << dKg;
    std::cout << "\nYour height in meters is " << dMet << std::endl;
    return 0;
}
