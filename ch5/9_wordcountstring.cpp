//---------------C++ Primer 6th ed.----------------
//--------------Chapter 5, exercise 9--------------
#include <iostream>
#include <string>

int main(){
    std::string str;
    int nCount = 0;
    std::cout << "Enter words (enter \"done\" to stop): \n";
    std::cin >> str;
    while (str != "done"){
        nCount++;
        std::cin >> str;
    };
    std::cout << "You've entered " << nCount << " words.\n";
}