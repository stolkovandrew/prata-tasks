#include <iostream>

int main(){
    const int ConvFacFtIn = 12;
    const double ConvFacInM = 0.0254;
    const double ConvFacInvLbKg = 2.2; 
    std::cout << "Enter your height, feet first:__\b\b";
    int inft;
    std::cin >> inft;
    std::cout << "and now, inches:__\b\b";
    int inin;
    std::cin >> inin;
    std::cout << "We'll also need your weight in pounds:___\b\b\b";
    int inlb;
    std::cin >> inlb;
    double met = ConvFacInM*(inft*ConvFacFtIn+inin);
    double kg = inlb/ConvFacInvLbKg;
    double bmi = kg/(met*met);
    std::cout << "Your BMI is " << bmi;
    std::cout << "\nYour weight in kg is " << kg;
    std::cout << "\nYour height in meters is " << met << std::endl;
    return 0;
}
