//---------------C++ Primer 6th ed.----------------
//--------------Chapter 4, exercise 7--------------
#include <iostream>

struct pizza
{
    char charrCompanyName[20];
    int nDiameter;
    float fWeight;
};
int main(){
    pizza pizzaInfo;
    std::cout << "Enter the manufacturers name: ";
    std::cin.getline(pizzaInfo.charrCompanyName, 20);
    std::cout << "Enter the diameter: ";
    std::cin >> pizzaInfo.nDiameter;
    std::cout << "Enter the weight: ";
    std::cin >> pizzaInfo.fWeight;
    std::cout << "Pizza is made by " << pizzaInfo.charrCompanyName
    << ", has a diameter of " << pizzaInfo.nDiameter
    << "cm and weighs " << pizzaInfo.fWeight << "kg" << std::endl;
    return 0;
}
