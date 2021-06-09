//---------------C++ Primer 6th ed.----------------
//--------------Chapter 3, exercize 5--------------
#include <iostream>

int main(){
    std::cout << "Enter the world's population: ";
    long long llWorldPops;
    std::cin >> llWorldPops;
    std::cout << "Enter the population of some country: ";
    long long llCountryPops;
    std::cin >> llCountryPops;
    double dPercentage = 100*double(llCountryPops)/double(llWorldPops);
    std::cout << "The population of some country is " << dPercentage << "\% of the world population\n";
    return 0;
}
