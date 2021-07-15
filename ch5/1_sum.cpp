//---------------C++ Primer 6th ed.----------------
//--------------Chapter 5, exercise 1--------------
#include <iostream>

int main(){
    int nLow, nHigh, nSum = 0;
    std::cout << "Please enter the lower bound: ";
    std::cin >> nLow;
    std::cout << "Please enter the higher bound: ";
    std::cin >> nHigh;
    for (int low = nLow; low <= nHigh; low++)
        nSum += low;
    std::cout << "The sum of all numbers between " << nLow << " and " << nHigh << " is " << nSum << std::endl;
    return 0;
}
