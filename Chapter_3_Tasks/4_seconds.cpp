#include <iostream>

int main(){
    const int ConvFacSecMin = 60;
    const int ConvFacSecHour = 3600;
    const int ConvFacSecDay = 86400;
    std::cout << "Enter the number of seconds: ";
    long input;
    std::cin >> input;
    int day = input/ConvFacSecDay;
    int hour = (input%ConvFacSecDay)/ConvFacSecHour;
    int min = (input%ConvFacSecHour)/ConvFacSecMin;
    int sec = input%ConvFacSecMin;
    std::cout << input << " seconds = " << day << " days, " << hour << " hours, " << min << " minutes and " << sec << " seconds.\n";
    return 0;
}
