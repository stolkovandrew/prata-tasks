//---------------C++ Primer 6th ed.----------------
//--------------Chapter 10, exercise 6--------------
#include <iostream>
#include "move.h"

int main(){
    double inputX, inputY;
    std::cout << "Enter your first move:\n";
    std::cout << "X = __\b\b";
    std::cin >> inputX;
    std::cout << "Y = __\b\b";
    std::cin >> inputY;
    Move first(inputX, inputY);
    std::cout << "Your first move is:\n";
    first.showmove();
    std::cout << "Enter your second move:\n";
    std::cout << "X = __\b\b";
    std::cin >> inputX;
    std::cout << "Y = __\b\b";
    std::cin >> inputY;
    Move second(inputX, inputY);
    std::cout << "Your second move is:\n";
    second.showmove();
    std::cout << "Adding moves together...\n";
    Move sum = first.add(second);
    std::cout << "Cumulative movement is:\n";
    sum.showmove();
    std::cout << "Resetting the moves...\n";
    first.reset();
    second.reset();
    std::cout << "First move now is:\n";
    first.showmove();
    std::cout << "Second move now is:\n";
    second.showmove();
    std::cout << "Bye!\n";
    return 0;
}
