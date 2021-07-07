//---------------C++ Primer 6th ed.----------------
//--------------Chapter 5, exercise 8--------------
#include <iostream>
#include <cstring>

int main(){
    char ch[20];
    int nCount = 0;
    std::cout << "Enter words (enter \"done\" to stop): \n";
    std::cin >> ch;
    while (strcmp(ch, "done")){
        nCount++;
        std::cin >> ch;
    };
    std::cout << "You've entered " << nCount << " words.\n";
}