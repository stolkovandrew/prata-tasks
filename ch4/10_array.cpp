//---------------C++ Primer 6th ed.----------------
//--------------Chapter 4, exercise 10-------------
#include <iostream>
#include <array>

int main(){
    std::array<float, 3> farrResults;
    std::cout << "You've participated in three races of 40 meters!";
    std::cout << "\nPlease enter the result of the first one: ";
    std::cin >> farrResults[0];
    std::cout << "Now, second: ";
    std::cin >> farrResults[1];
    std::cout << "Finally, third: ";
    std::cin >> farrResults[2];
    float fAverage = (farrResults[0] + farrResults[1] + farrResults[2])/3.0;
    std::cout << "Your average time is: " << fAverage << "s\n";
    return 0;
}
