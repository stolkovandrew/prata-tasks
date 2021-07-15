//---------------C++ Primer 6th ed.----------------
//--------------Chapter 6, exercise 3--------------
#include <iostream>
void menu();
void menuFail();
void optionA();
void optionB();
void optionC();
void optionD();

int main(){
    bool isLooping = true;
    menu();
    char chCode;
    std::cin >> chCode;
    while (isLooping){
        switch (chCode) {
        case 'a':
            optionA();
            isLooping = false;
            break;
        case 'b':
            optionB();
            isLooping = false;
            break;
        case 'c':
            optionC();
            isLooping = false;
            break;
        case 'd':
            optionD();
            isLooping = false;
            break;
        default: menuFail();
            std::cin >> chCode;
            break;
        }
    }
    return 0;
}
void menu(){
    std::cout << "Please enter one of the following choises:\n";
    std::cout << "a) Apple\tb) Bumblebee\n";
    std::cout << "c) Creek\td) Dessert \n";
}
void menuFail(){
    std::cout << "Please enter an a, b, c or d: ";
}
void optionA(){
    std::cout << "Apples are the source of gravity!\n";
}
void optionB(){
    std::cout << "Bumblebees live in underground burrows.\n";
}
void optionC(){
    std::cout << "Creeks are usually chill.\n";
}
void optionD(){
    std::cout << "You shouldn't eat dessert for breakfast!\n";
}
