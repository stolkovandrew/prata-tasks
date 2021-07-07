//---------------C++ Primer 6th ed.----------------
//--------------Chapter 2, exercise 6--------------
#include <iostream>

double lytoau(double);

int main(){
    std::cout << "Enter the number of light years: ";
    double dInput;
    std::cin >> dInput;
    double dOutput = lytoau(dInput);
    std::cout << dInput << " ly = " << dOutput << " au." << std::endl;
    return 0;
}
double lytoau(double ly){
    return ly*63240;
}
