//---------------C++ Primer 6th ed.----------------
//--------------Chapter 10, exercise 4--------------
#include <iostream>
#include "sales.h"

int main(){
    std::cout << "Creating second\n";
    SALES::Sales second;
    double darrSales[] = {
        1450.0, 1920.0, 373.0, 989.0
    };
    std::cout << "Initializing first\n";
    SALES::Sales first(darrSales);
    std::cout << "First years sales found, proceeding...\n";
    std::cout << "Enter second year sales, please\n";
    second.set();
    std::cout << "Sales data aquired, displaying...\n";
    std::cout << "Sales data for the first year:\n";
    first.show();
    std::cout << "Sales data for the second year:\n";
    second.show();
    std::cout << "Bye!\n";
    return 0;
}
