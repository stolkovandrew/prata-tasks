#include <iostream>
#include <string>

int main(){
    std::cout << "Enter your first name: ";
    std::string firstName;
    std::getline(std::cin, firstName);
    std::cout << "Enter your last name: ";
    std::string lastName;
    std::getline(std::cin, lastName);
    std::string wholeName;
    wholeName = lastName + ", " + firstName;
    std::cout << "Here's the information in a single string: " << wholeName << std::endl;
    return 0;
}