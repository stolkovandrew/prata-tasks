//---------------C++ Primer 6th ed.----------------
//--------------Chapter 3, exercize 6--------------
#include <iostream>

int main(){
    std::cout << "Enter the distance in kilometres: ";
    double dKm;
    std::cin >> dKm;
    std::cout << "Enter the fuels consumption in liters: ";
    double dLtr;
    std::cin >> dLtr;
    double dPerf = 100*dLtr/dKm;
    std::cout << "Your car consumed " << dPerf <<" liters of fuel per 100 km\n";
    return 0;
}
