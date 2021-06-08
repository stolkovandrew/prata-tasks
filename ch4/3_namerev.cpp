#include <iostream>
#include <cstring>

int main(){
    const int NameLength = 20;
    std::cout << "Enter your first name: ";
    char firstName[NameLength];
    std::cin.getline(firstName, NameLength);
    std::cout << "Enter your last name: ";
    char lastName[NameLength];
    std::cin.getline(lastName, NameLength);
    char wholeName[NameLength*2];
    std::strcat(wholeName, lastName);
    std::strcat(wholeName, ", ");
    std::strcat(wholeName, firstName);
    std::cout << "Here's the information in a single string: " << wholeName << std::endl;
    return 0;
}