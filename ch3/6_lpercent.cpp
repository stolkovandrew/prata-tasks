#include <iostream>

int main(){
    std::cout << "Enter the distance in kilometres: ";
    double km;
    std::cin >> km;
    std::cout << "Enter the fuels consumption in liters: ";
    double ltr;
    std::cin >> ltr;
    double perf = 100*ltr/km;
    std::cout << "Your car consumed " << perf <<" liters of fuel per 100 km\n";
    return 0;
}
