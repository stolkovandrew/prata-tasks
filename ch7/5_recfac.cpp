//---------------C++ Primer 6th ed.----------------
//--------------Chapter 7, exercise 5--------------
#include <iostream>
long factorial(long);

int main(){
    long lInput = 0;
    std::cout << "Enter a number to be factorialised (q to quit): ";
    while (std::cin >> lInput){
        if (lInput >= 0)
            std::cout << lInput << "! = " << factorial(lInput);
        else
            std::cout << "Positive numbers only!";
        std::cout << "\nEnter the next number (q to quit): ";
    }
    std::cout << "Bye!\n";
    return 0;
}
long factorial(long in){
    if (in == 0)
        return 1;
    else
        return in * factorial(in - 1);
}
