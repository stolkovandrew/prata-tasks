//---------------C++ Primer 6th ed.----------------
//--------------Chapter 4, exercize 8--------------
#include <iostream>

struct pizza
{
    char charrCompanyName[20];
    int nDiameter;
    float fWeight;
};
int main(){
    pizza* p_pizza = new pizza;
    std::cout << "Enter the diameter: ";
    std::cin >> p_pizza->nDiameter;
    std::cin.get();
    std::cout << "Enter the manufacturers name: ";
    std::cin.getline(p_pizza->charrCompanyName, 20);
    std::cout << "Enter the weight: ";
    std::cin >> p_pizza->fWeight;
    std::cout << "Pizza is made by " << p_pizza->charrCompanyName
    << ", has a diameter of " << p_pizza->nDiameter
    << "cm and weighs " << p_pizza->fWeight << "kg" << std::endl;
    return 0;
}
