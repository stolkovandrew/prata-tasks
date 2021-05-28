#include <iostream>

int main(){
    const int ConvFacDegMin = 60;
    const int ConvFacDegSec = 3600;
    std::cout << "Enter a latitude in degrees, minutes and seconds:\n";
    std::cout << "First, enter the degrees: ";
    double deg;
    std::cin >> deg;
    std::cout << "Next, enter the minutes: ";
    double min;
    std::cin >> min;
    std::cout << "Finally, enter the seconds: ";
    double sec;
    std::cin >> sec;
    double out = deg + (min/ConvFacDegMin) + (sec/ConvFacDegSec);
    std::cout << std::endl << deg << " degrees, " << min << " minutes, " << sec << " seconds = " << out << " degrees\n";
    return 0;
}
