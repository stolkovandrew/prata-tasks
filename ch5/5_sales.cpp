//---------------C++ Primer 6th ed.----------------
//--------------Chapter 5, exercize 5--------------
#include <iostream>

int main(){
    const char* chparrMonths[12] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    int narrSales[12];
    int nTotalSales = 0;
    for (int i = 0; i < 12; i++){
        std::cout << "How many books were sold in " << chparrMonths[i] << "?: ";
        std::cin >> narrSales[i];
    };
    for (int i = 0; i < 12; i++)
        nTotalSales += narrSales[i];
    std::cout << "Total sales this year: " << nTotalSales << " books\n";
    return 0;
}