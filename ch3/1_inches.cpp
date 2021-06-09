//---------------C++ Primer 6th ed.----------------
//--------------Chapter 3, exercize 1--------------
#include <iostream>

int main(){
    const int nConstConvF = 12; 
    std::cout << "Enter your height in inches:____\b\b\b\b";
    int nInput;
    std::cin >> nInput;
    int nFt = nInput/nConstConvF;
    int nIn = nInput%nConstConvF;
    std::cout << "\nYour height is " << nFt << " ft " << nIn << " in.\n";
    return 0;
}
