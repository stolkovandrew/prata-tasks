//---------------C++ Primer 6th ed.----------------
//--------------Chapter 6, exercise 4--------------
#include <iostream>
void openMenu();
void menuFail();
void nextChoise();
const int strsize = 30;
const int ArrSize = 5;
char chChoise;
struct bop{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};
bop names[ArrSize] = {
    {"Wimp Macho", "CEO", "HECK", 0},
    {"Raki Rhodes", "Junior Programmer", "ROADY", 1},
    {"Celia Laiter", "Sales manager", "MIPS", 2},
    {"Hoppy Hipman", "Analyst Trainee", "HIPPO", 1},
    {"Pat Hand", "Inventory Manager", "LOOPY", 2}
};
int main(){
    bool isLooping = true;
    openMenu();
    std::cin >> chChoise;
    while (isLooping){
        switch (chChoise) {
        case 'a': 
            for (int i = 0; i < ArrSize; i++){
                std::cout << names[i].fullname << "\n";
            }
            nextChoise();
            break;
        case 'b': 
            for (int i = 0; i < ArrSize; i++){
                std::cout << names[i].title << "\n";
            }
            nextChoise();
            break;
        case 'c': 
            for (int i = 0; i < ArrSize; i++){
                std::cout << names[i].bopname << "\n";
            }
            nextChoise();
            break;
        case 'd':
            for (int i = 0; i < ArrSize; i++){
                switch (names[i].preference){
                case 0:
                    std::cout << names[i].fullname << "\n";
                    break;
                case 1:
                    std::cout << names[i].title << "\n";
                    break;
                case 2:
                    std::cout << names[i].bopname << "\n";
                    break;
                default: 
                    std::cout << "Preference for " << names[i].fullname << " is set incorrectly.\n";
                    break;
                }
            }
            nextChoise();
            break;
        case 'q':
            std::cout << "Bye!\n";
            isLooping = false;
            break;
        default: menuFail();
            std::cin >> chChoise;
            break;
        }
    }
    return 0;
}
void openMenu(){
    std::cout << "Benevolent Order of Programmers Report\n";
    std::cout << "a. display by name\tb. display by title\n";
    std::cout << "c. display by bopname\td. display by preference\n";
    std::cout << "q. quit\nEnter your choise: ";
}
void menuFail(){
    std::cout << "Please enter a, b, c, d or q: ";
}
void nextChoise(){
    std::cout << "Next choise: ";
    std::cin >> chChoise;
}
