//---------------C++ Primer 6th ed.----------------
//--------------Chapter 10, exercise 2--------------
#include "person.h"
#include <iostream>

int main(){
    Person one;
    Person two("Oopenheimer");
    Person three("Guy", "Realcool");
    one.Show();
    one.FormalShow();
    two.Show();
    two.FormalShow();
    three.Show();
    three.FormalShow();
    std::cout << "Bye!\n";
    return 0;
}
