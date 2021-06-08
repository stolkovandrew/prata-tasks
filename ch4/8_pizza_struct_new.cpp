#include <iostream>

struct pizza
{
    char companyName[20];
    int diameter;
    float weight;
};
int main(){
    pizza* p_pizza = new pizza;
    std::cout << "Enter the diameter: ";
    std::cin >> p_pizza->diameter;
    std::cin.get();
    std::cout << "Enter the manufacturers name: ";
    std::cin.getline(p_pizza->companyName, 20);
    std::cout << "Enter the weight: ";
    std::cin >> p_pizza->weight;
    std::cout << "Pizza is made by " << p_pizza->companyName
    << ", has a diameter of " << p_pizza->diameter
    << "cm and weighs " << p_pizza->weight << "kg" << std::endl;
    return 0;
}
