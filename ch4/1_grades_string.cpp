//---------------C++ Primer 6th ed.----------------
//--------------Chapter 4, exercize 1--------------
#include <iostream>

int main(){
    const int nConstNameLength = 20;
    std::cout << "What's your first name? ";
    char charrFirstName[nConstNameLength];
    std::cin.getline(charrFirstName, nConstNameLength);
    std::cout << "What's your last name? ";
    char charrLastName[nConstNameLength];
    std::cin.getline(charrLastName, nConstNameLength);
    std::cout << "What letter grade do you deserve? ";
    char chInputLetter;
    std::cin >> chInputLetter;
    char chGrade = ++chInputLetter;
    std::cout << "What's your nAge? ";
    int nAge;
    std::cin >> nAge;
    std::cout << "Name: " << charrLastName << ", " << charrFirstName << std::endl;
    std::cout << "Grade: " << chGrade << std::endl;
    std::cout << "nAge: " << nAge << std::endl;
    return 0;
}