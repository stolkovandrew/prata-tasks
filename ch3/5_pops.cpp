#include <iostream>

int main(){
    std::cout << "Enter the world's population: ";
    long long worldPops;
    std::cin >> worldPops;
    std::cout << "Enter the population of some country: ";
    long long countryPops;
    std::cin >> countryPops;
    double percentage = 100*double(countryPops)/double(worldPops);
    std::cout << "The population of some country is " << percentage << "\% of the world population\n";
    return 0;
}
