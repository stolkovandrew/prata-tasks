//---------------C++ Primer 6th ed.----------------
//--------------Chapter 3, exercize 4--------------
#include <iostream>

int main(){
    const int nConstConvFacSecMin = 60;
    const int nConstConvFacSecHour = 3600;
    const int nConstConvFacSecDay = 86400;
    std::cout << "Enter the number of seconds: ";
    long lInput;
    std::cin >> lInput;
    int nDay = lInput/nConstConvFacSecDay;
    int nHour = (lInput%nConstConvFacSecDay)/nConstConvFacSecHour;
    int nMin = (lInput%nConstConvFacSecHour)/nConstConvFacSecMin;
    int nSec = lInput%nConstConvFacSecMin;
    std::cout << lInput << " seconds = " << nDay << " days, " << nHour << " hours, " << nMin << " minutes and " << nSec << " seconds.\n";
    return 0;
}
