//---------------C++ Primer 6th ed.----------------
//--------------Chapter 4, exercize 2--------------
#include <iostream>
#include <string>

int main(){
    std::cout << "What's your first name? ";
    std::string strFirstName;
    std::getline(std::cin, strFirstName);
    std::cout << "What's your last name? ";
    std::string strLastName;
    std::getline(std::cin, strLastName);
    std::cout << "What letter grade do you deserve? ";
    char chInputLetter;
    std::cin >> chInputLetter;
    char chGrade = ++chInputLetter;
    std::cout << "What's your nAge? ";
    int nAge;
    std::cin >> nAge;
    std::cout << "Name: " << strLastName << ", " << strFirstName << std::endl;
    std::cout << "Grade: " << chGrade << std::endl;
    std::cout << "Age: " << nAge << std::endl;
    return 0;
}