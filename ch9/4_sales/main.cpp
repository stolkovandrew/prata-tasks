//---------------C++ Primer 6th ed.----------------
//--------------Chapter 9, exercise 4--------------
#include <iostream>
#include "sales.h"

int main(){
    SALES::Sales first, second;
    double darrSales[] = {
        1450.0, 1920.0, 373.0, 989.0
    };
    SALES::setSales(first, darrSales);
    std::cout << "First years sales found, proceeding...\n";
    std::cout << "Enter second year sales, please\n";
    SALES::setSales(second);
    std::cout << "Sales data aquired, displaying...\n";
    std::cout << "Sales data for the first year:\n";
    SALES::showSales(first);
    std::cout << "Sales data for the second year:\n";
    SALES::showSales(second);
    std::cout << "Bye!\n";
    return 0;
}
