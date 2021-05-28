#include <iostream>

void disp(int,int);

int main(){
    std::cout << "Enter the number of hours: ";
    int hours;
    std::cin >> hours;
    std::cout << "Inter the number of minutes: ";
    int minutes;
    std::cin >> minutes;
    disp(hours, minutes);
    return 0;
}
void disp(int hrs, int mnt){
    std::cout << "Time: " << hrs << ":" << mnt << std::endl;
}
