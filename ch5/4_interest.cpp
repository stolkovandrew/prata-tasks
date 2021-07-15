//---------------C++ Primer 6th ed.----------------
//--------------Chapter 5, exercise 4--------------
#include <iostream>

int main (){
    double dDaphne = 100.0;
    double dCleo = 100.0;
    double dDaphneIncrease = 0.1*dDaphne;
    int nYear = 0;
    while (dDaphne >= dCleo){
        std::cout << "Year " << nYear << ": ";
        std::cout << "Daphne has $" << dDaphne << ", Cleo has $" << dCleo << std::endl;
        dDaphne += dDaphneIncrease;
        dCleo *=1.05;
        nYear++;
    };
    std::cout << "Year " << nYear << ": ";
    std::cout << "Daphne has $" << dDaphne << ", Cleo has $" << dCleo << std::endl;
    std::cout << "It took " << nYear << " years for Cleo to overtake Daphne\n";
}
