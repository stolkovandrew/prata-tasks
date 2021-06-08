#include <iostream>

struct CandyBar
{
    char name[20];
    float weight;
    int cal;
};

int main(){
    CandyBar* snacks = new CandyBar[3];
    snacks[0] = {"Crusty fingers", 45.8, 144};
    snacks[1] = {"Cheesecake", 265.0, 820};
    snacks[2] = {"Honeycomb", 135.6, 420};
    std::cout << "1st snack's name: " << snacks[0].name << "\n          weight: " << snacks[0].weight << "\n   calorie count: " << snacks[0].cal << std::endl;
    std::cout << "2nd snack's name: " << snacks[1].name << "\n          weight: " << snacks[1].weight << "\n   calorie count: " << snacks[1].cal << std::endl;
    std::cout << "3rd snack's name: " << snacks[2].name << "\n          weight: " << snacks[2].weight << "\n   calorie count: " << snacks[2].cal << std::endl;
    delete [] snacks;
    return 0;
}