#include <iostream>

struct pizza
{
    char companyName[20];
    int diameter;
    float weight;
};
int main(){
    pizza pizzaInfo;
    std::cout << "Enter the manufacturers name: ";
    std::cin.getline(pizzaInfo.companyName, 20);
    std::cout << "Enter the diameter: ";
    std::cin >> pizzaInfo.diameter;
    std::cout << "Enter the weight: ";
    std::cin >> pizzaInfo.weight;
    std::cout << "Pizza is made by " << pizzaInfo.companyName
    << ", has a diameter of " << pizzaInfo.diameter
    << "cm and weighs " << pizzaInfo.weight << "kg" << std::endl;
    return 0;
}
