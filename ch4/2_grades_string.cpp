#include <iostream>
#include <string>

int main(){
    std::cout << "What's your first name? ";
    std::string firstName;
    std::getline(std::cin, firstName);
    std::cout << "What's your last name? ";
    std::string lastName;
    std::getline(std::cin, lastName);
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