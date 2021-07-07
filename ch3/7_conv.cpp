//---------------C++ Primer 6th ed.----------------
//--------------Chapter 3, exercise 7--------------
#include <iostream>

int main(){
    const double dConstConvFacKmMl = 0.6214;
    const double dConstConvFacGalL = 3.875;
    const int nConstPerfAdjust = 100;
    std::cout << "Enter the performance of your car in liters per 100 kilometres: ";
    double dPerfMetric;
    std::cin >> dPerfMetric;
    double dPerfImperial = (1/(dPerfMetric/nConstPerfAdjust))*dConstConvFacGalL*dConstConvFacKmMl;
    std::cout << "Performance of your car is " << dPerfImperial << " miles per gallon\n";
    return 0;
}
