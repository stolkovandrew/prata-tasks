//---------------C++ Primer 6th ed.----------------
//--------------Chapter 3, exercize 3--------------
#include <iostream>

int main(){
    const int nConstConvFacDegMin = 60;
    const int nConstConvFacDegSec = 3600;
    std::cout << "Enter a latitude in degrees, minutes and seconds:\n";
    std::cout << "First, enter the degrees: ";
    double dDeg;
    std::cin >> dDeg;
    std::cout << "Next, enter the minutes: ";
    double dMin;
    std::cin >> dMin;
    std::cout << "Finally, enter the seconds: ";
    double dSec;
    std::cin >> dSec;
    double dOut = dDeg + (dMin/nConstConvFacDegMin) + (dSec/nConstConvFacDegSec);
    std::cout << std::endl << dDeg << " degrees, " << dMin << " minutes, " << dSec << " seconds = " << dOut << " degrees\n";
    return 0;
}
