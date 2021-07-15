//---------------C++ Primer 6th ed.----------------
//--------------Chapter 6, exercise 1--------------
#include <iostream>
#include <cctype>

int main(){
    std::cout << "Enter something (proccesing stops at '@'): \n";
    char ch;
    while ((ch=std::cin.get()) != '@'){
        if (isdigit(ch))
            continue;
        else if (islower(ch))
            std::cout << char(toupper(ch));
        else if (isupper(ch))
            std::cout << char(tolower(ch));
        else if (isspace(ch))
            std::cout << ch;
        else {
            std::cout << "\nSomething unexpected happened!";
            break;
        }
    }
    std::cout << "\n";
    return 0;
}
