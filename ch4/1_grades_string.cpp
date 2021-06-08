#include <iostream>

int main(){
    const int nameLength = 20;
    std::cout << "What's your first name? ";
    char firstName[nameLength];
    std::cin.getline(firstName, nameLength);
    std::cout << "What's your last name? ";
    char lastName[nameLength];
    std::cin.getline(lastName, nameLength);
    std::cout << "What letter grade do you deserve? ";
    char inputLetter;
    std::cin >> inputLetter;
    char grade = ++inputLetter;
    std::cout << "What's your age? ";
    int age;
    std::cin >> age;
    std::cout << "Name: " << lastName << ", " << firstName << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Age: " << age << std::endl;
    return 0;
}