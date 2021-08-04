//---------------C++ Primer 6th ed.----------------
//--------------Chapter 7, exercise 4--------------
#include <iostream>
long double probability(unsigned numbers, unsigned picks);

int main(){
    double total, choices, mega;
    std::cout << "Enter the total number of choices on the game card,\n"
            "the number of picks allowed, and the number of choises\nin the meganumber field: ";
    while ((std::cin >> total >> choices >> mega) && choices <= total){
        std::cout << "You have one chance in ";
        std::cout << probability(total, choices) * mega;
        std::cout << " of winning.\n";
        std::cout << "Next three numbers (q to quit): ";
    }
    std::cout << "Bye!\n";
    return 0;
}
long double probability(unsigned numbers, unsigned picks){
    long double result = 1.0;
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p ; 
    return result;
}
