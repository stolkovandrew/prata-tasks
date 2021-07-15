//---------------C++ Primer 6th ed.----------------
//--------------Chapter 5, exercise 3--------------
#include <iostream>

int main(){
    int nInput;
    int nSum = 0;
    std::cout << "Please, enter the first number: ";
    std::cin >> nInput;
    while (nInput){
        nSum += nInput;
        std::cout << nSum
                  << "\nEnter next number: ";
        std::cin >> nInput;
    };
    return 0;
}
