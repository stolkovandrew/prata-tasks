#include <iostream>

int main(){
    std::cout << "Please, enter a distance in furlongs: ";
    int fur;
    std::cin >> fur;
    int yar = 220*fur;
    std::cout << fur << " furlongs is "
              << yar << " yards";
    return 0;
}
