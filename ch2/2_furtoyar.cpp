//---------------C++ Primer 6th ed.----------------
//--------------Chapter 2, exercize 2--------------
#include <iostream>

int main(){
    std::cout << "Please, enter a distance in furlongs: ";
    int nFur;
    std::cin >> nFur;
    int nYar = 220*nFur;
    std::cout << nFur << " furlongs is "
              << nYar << " yards";
    return 0;
}
