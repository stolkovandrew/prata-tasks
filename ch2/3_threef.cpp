//---------------C++ Primer 6th ed.----------------
//--------------Chapter 2, exercise 3--------------
#include <iostream>

void first(void);
void second(void);

int main(){
    first();
    first();
    second();
    second();
    return 0;
}

void first(void){
    std::cout << "Three blind mice" << std::endl;
}
void second(void){
    std::cout << "See how they run" << std::endl;
}
