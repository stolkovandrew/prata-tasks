#include <iostream>

double lytoau(double);

int main(){
    std::cout << "Enter the number of light years: ";
    double in;
    std::cin >> in;
    double out = lytoau(in);
    std::cout << in << " ly = " << out << " au." << std::endl;
    return 0;
}
double lytoau(double ly){
    return ly*63240;
}
