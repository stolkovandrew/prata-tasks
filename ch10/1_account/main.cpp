//---------------C++ Primer 6th ed.----------------
//--------------Chapter 10, exercise 1--------------
#include "acc.h"
#include <iostream>

int main(){
    std::string inputName = "";
    std::string inputNumber = "";
    double inputBalance = 0.0;
    std::cout << "Please, enter acc. number: ";
    std::getline(std::cin, inputNumber);
    std::cout << "       acc. holder's name: ";
    std::getline(std::cin, inputName);
    std::cout << "              and balance: ";
    std::cin >> inputBalance;
    std::cout << "Proccessing...\n";
    Account acc = {inputName, inputNumber, inputBalance};
    acc.showAcc();
    std::cout << "Enter the amount you would like to deposit \n(enter a negative value to withdraw) (q to quit): ";
    while ((std::cin >> inputBalance)){
        if (acc.changeBalance(inputBalance)){
            acc.showAcc();
        }
        std::cout << "Enter the amount you would like to deposit: ";
    }
    std::cout << "Bye!\n";
    return 0;
}
