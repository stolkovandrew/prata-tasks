//---------------C++ Primer 6th ed.----------------
//--------------Chapter 6, exercise 5--------------
#include <iostream>

int main(){
    double nTotalTax = 0.0;
    int nInput;
    std::cout << "Please enter your income: ";
    while ((std::cin >> nInput) && (nInput >= 0)){
        if (nInput <= 5000)
            nTotalTax = 0.0;
        else if (nInput > 5000 && nInput <= 15000)
            nTotalTax = 0.1*(nInput - 5000);
        else if (nInput > 15000 && nInput <= 35000)
            nTotalTax = 0.15*(nInput - 15000) + 1000;
        else if (nInput > 35000)
            nTotalTax = 0.2*(nInput - 35000) + 4000;
        else std::cout << "Something wrong with ranges.\n";
        std::cout << "Total tax owed: " << nTotalTax << "\n";
        std::cout << "Please enter your income: ";
    }
    std::cout << "Bye!\n";
    return 0;
}
