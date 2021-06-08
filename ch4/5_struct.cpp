#include <iostream>

struct CandyBar
{
    char name[20];
    float weight;
    int cal;
};

int main(){
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    std::cout << "Snack's name: " << snack.name << std::endl;
    std::cout << "Snack's weight: " << snack.weight << std::endl;
    std::cout << "Snack's calorie count: " << snack.cal << std::endl;
    return 0;
}