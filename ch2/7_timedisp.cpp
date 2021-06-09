//---------------C++ Primer 6th ed.----------------
//--------------Chapter 2, exercize 7--------------
#include <iostream>

void disp(int,int);

int main(){
    std::cout << "Enter the number of hours: ";
    int nHours;
    std::cin >> nHours;
    std::cout << "Inter the number of minutes: ";
    int nMinutes;
    std::cin >> nMinutes;
    disp(nHours, nMinutes);
    return 0;
}
void disp(int hrs, int mnt){
    std::cout << "Time: " << hrs << ":" << mnt << std::endl;
}
