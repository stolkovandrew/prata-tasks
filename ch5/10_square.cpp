//---------------C++ Primer 6th ed.----------------
//--------------Chapter 5, exercise 10-------------
#include <iostream>

int main(){
    int nInput = 0;
    std::cout << "Enter the number of lines: ";
    std::cin >> nInput;
    for (int i = 0; i < nInput; i++){
        for (int y = nInput-i; y > 1; --y)
            std::cout << ".";
        for (int x = 0; x <= i; x++)
            std::cout << "*";
        std::cout << std::endl;
    };
    return 0;
}
