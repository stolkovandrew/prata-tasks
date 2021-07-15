//---------------C++ Primer 6th ed.----------------
//--------------Chapter 4, exercise 4--------------
#include <iostream>
#include <string>

int main(){
    std::cout << "Enter your first name: ";
    std::string strFirstName;
    std::getline(std::cin, strFirstName);
    std::cout << "Enter your last name: ";
    std::string strLastName;
    std::getline(std::cin, strLastName);
    std::string strWholeName;
    strWholeName = strLastName + ", " + strFirstName;
    std::cout << "Here's the information in a single string: " << strWholeName << std::endl;
    return 0;
}
