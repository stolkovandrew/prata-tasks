//---------------C++ Primer 6th ed.----------------
//--------------Chapter 2, exercize 4--------------
#include <iostream>

int main(){
    std::cout << "Enter your age: ";
    int nAge;
    std::cin >> nAge;
    std::cout << "Your age in months is " << nAge*12 << std::endl;
    return 0;
}
