//---------------C++ Primer 6th ed.----------------
//--------------Chapter 7, exercise 1--------------
#include <iostream>
double harmonicAverage(double a, double b);

int main(){
    std::cout << "Enter two numbers (at least one of them should be 0 to quit):\n";
    double x = 0.0;
    double y = x;
    std::cin >> x >> y;
    while (!((x == 0) || (y == 0))){
        std::cout << "Harmonic average of " << x
        << " and " << y << " is "
        << harmonicAverage(x, y) << "\n";
        std::cout << "Enter next two numbers:\n";
        std::cin >> x >> y;
    }
    std::cout << "Bye!\n";
    return 0;
}
double harmonicAverage(double a, double b){
    return 2.0 * a * b /(a + b);
}
