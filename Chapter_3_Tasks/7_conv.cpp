#include <iostream>

int main(){
    const double ConvFacKmMl = 0.6214;
    const double ConvFacGalL = 3.875;
    const int PerfAdjust = 100;
    std::cout << "Enter the performance of your car in liters per 100 kilometres: ";
    double perfMetric;
    std::cin >> perfMetric;
    double perfImperial = (1/(perfMetric/PerfAdjust))*ConvFacGalL*ConvFacKmMl;
    std::cout << "Performance of your car is " << perfImperial << " miles per gallon\n";
    return 0;
}
