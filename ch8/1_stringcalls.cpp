//---------------C++ Primer 6th ed.----------------
//--------------Chapter 8, exercise 1--------------
#include <iostream>
void printString(char* str, int n = 0);
int funcCallCounter = 0;

int main(){
    char charrInput[40];
    std::cout << "Please, input your string: ";
    std::cin.getline(charrInput, 40);
    std::cout << "Calling the display function for the first time,\nw/out the integer argument:\n";
    printString(charrInput);
    std::cout << "Calling the display function for the second time,\nnow with the integer argument of 999:\n";
    printString(charrInput, 999);
    std::cout << "Calling the display function for the third time,\nw/out the integer argument again:\n";
    printString(charrInput);
    std::cout << "Calling the display function for the fourth time,now with the integer argument of 1:\n";
    printString(charrInput, 1);
    std::cout << "Goodbye!\n";
    return 0;
}
void printString(char* str, int n){
    if (n) {
        for (int i = funcCallCounter; i > 0; i--){
            std::cout << str << '\n';
        }
    }
    else
        std::cout << str << '\n';
    funcCallCounter++;
}
