//---------------C++ Primer 6th ed.----------------
//--------------Chapter 5, exercise 6--------------
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
    int narrSales[3][12];
    int nYearlySales[3];
    int nTotalSales = 0;
    for (int j = 0; j < 3; j++){
        std::cout << "Year " << j+1 << std::endl;
        for (int i = 0; i < 12; i++){
            std::cout << "How many books were sold in " << chparrMonths[i] << "?: ";
            std::cin >> narrSales[j][i];
        };
    };
    for (int j = 0; j < 3; j++){
        for (int i = 0; i < 12; i++)
            nYearlySales[j] += narrSales[j][i];
    };
    for (int j = 0; j < 3; j++){
        std::cout << "Total sales in year " << j+1 << ": " << nYearlySales[j] << " books\n";
        nTotalSales += nYearlySales[j];
    };
    std::cout << "Total sales for all three years: " << nTotalSales << std::endl;
    return 0;
}