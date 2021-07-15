//---------------C++ Primer 6th ed.----------------
//--------------Chapter 4, exercise 3--------------
#include <iostream>
#include <cstring>

int main(){
    const int nConstNameLength = 20;
    std::cout << "Enter your first name: ";
    char charrFirstName[nConstNameLength];
    std::cin.getline(charrFirstName, nConstNameLength);
    std::cout << "Enter your last name: ";
    char charrLastName[nConstNameLength];
    std::cin.getline(charrLastName, nConstNameLength);
    char charrWholeName[nConstNameLength*2];
    std::strcat(charrWholeName, charrLastName);
    std::strcat(charrWholeName, ", ");
    std::strcat(charrWholeName, charrFirstName);
    std::cout << "Here's the information in a single string: " << charrWholeName << std::endl;
    return 0;
}
