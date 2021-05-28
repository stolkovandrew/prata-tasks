#include <iostream>

double ctof(double);

int main(){
    std::cout << "Enter the temperature in C:";     //not using ℃ here, it causes glitches with the input
    double cel;
    std::cin >> cel;
    double fah = ctof(cel);
    std::cout << cel << "℃ is " << fah << "℉" << std::endl;
    return 0;
}
double ctof(double cd){
    return 1.8*cd + 32;
}
