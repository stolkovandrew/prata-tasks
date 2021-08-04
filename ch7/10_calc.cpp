//---------------C++ Primer 6th ed.----------------
//--------------Chapter 7, exercise 10-------------
#include <iostream>
double calculate(double a, double b, double (*pf) (double, double));
double add(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main(){
    double (*p_arrFunc[3])(double, double) =
    {add, multiply, divide};
    double a, b;
    std::cout << "Enter two numbers (any non-number input will quit): ";
    while (std::cin >> a >> b){
        std::cout << "Here the results of a+b, a*b and a/b, respectively: ";
        for (int i = 0; i < 3; i++){
            std::cout << "\n" << calculate(a, b, p_arrFunc[i]);
        }
        std::cout << "\nEnter next two numbers: ";
    }
    std::cout << "Bye!\n";
    return 0;
}
double calculate(double a, double b, double (*pf) (double, double)){
    return pf(a, b);
}
double add(double a, double b){
    return a + b;
}
double multiply(double a, double b){
    return a * b;
}
double divide(double a, double b){
    return a / b;
}
