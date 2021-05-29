#include <iostream>

int main(){
    const int Convf = 12; 
    std::cout << "Enter your height in inches:____\b\b\b\b";
    int input;
    std::cin >> input;
    int ft = input/Convf;
    int in = input%Convf;
    std::cout << "\nYour height is " << ft << " ft " << in << " in.\n";
    return 0;
}
