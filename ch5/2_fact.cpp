//---------------C++ Primer 6th ed.----------------
//--------------Chapter 5, exercize 2--------------
#include <iostream>
#include <array>

const int ArSize = 101;
int main()
{
    std::array<long double, ArSize> ldarrFactorials ;
    ldarrFactorials[1] = ldarrFactorials[0] = 1.0;
    for (int i = 2; i < ArSize; i++)
        ldarrFactorials[i] = i * ldarrFactorials[i-1];
    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << ldarrFactorials[i] << std::endl;
	// std::cin.get();
    return 0;
}
