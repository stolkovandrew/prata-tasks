//---------------C++ Primer 6th ed.----------------
//--------------Chapter 10, exercise 8--------------
#include <iostream>
#include <string>
#include "list.h"

int main(){
    List list;
    bool isLooping = true;
    void (*pmul2)(double &) = mul2;
    void (*pmul5)(double &) = mul5;
    std::string menu = "=====Menu=====\na) Add an element to the list\tb) Check if the list is empty\nc) Check if the list if full\td) Display the list\ne) Multiply the list by two\tf) Multiply the list by five\nq) Quit\n>>: ";
    std::string menufail = "Please enter an a, b, c, d, f or q: ";
    std::cout << menu;
    char chCode;
    double dTemp;
    std::cin >> chCode;
    while (isLooping){
        switch (chCode) {
        case 'A': //add
        case 'a':
            std::cout << "Please, enter the number to add (s to stop): ";
            while (std::cin >> dTemp){;
                if (list.add(dTemp))
                    std::cout << "Added " << dTemp << " succsessfully!\n";
                else if (list.isFull()){
                    std::cout << "Looks like the list is full!\n";
                    break;
                }else{
                    std::cout << "Something went wrong!\n";
                    break;
                }
                std::cout << "Please, enter the next number: ";
            }
            std::cin.clear();
            std::cout << menu;
            std::cin >> chCode;
            break;
        case 'B': //isEmpty
        case 'b':
            if (list.isEmpty())
                std::cout << "List is empty.\n";
            else
                std::cout << "List is not empty.\n";
            std::cout << menu;
            std::cin >> chCode;
            break;
        case 'C': //isFull
        case 'c':
            if (list.isFull())
                std::cout << "List is full.\n";
            else
                std::cout << "List is not full.\n";
            std::cout << menu;
            std::cin >> chCode;
            break;
        case 'D': //show
        case 'd':
            list.show();
            std::cout << menu;
            std::cin >> chCode;
            break;
        case 'E': //mul2
        case 'e':
            list.visit(pmul2);
            std::cout << menu;
            std::cin >> chCode;
            break;
        case 'F': //mul5
        case 'f':
            list.visit(pmul5);
            std::cout << menu;
            std::cin >> chCode;
            break;
        case 'Q': //quit
        case 'q':
            std::cout << "Bye!\n";
            isLooping = false;
            break;
        default: 
            std::cout << menufail;
            std::cin >> chCode;
            break;
        }
    }
    return 0;
}
