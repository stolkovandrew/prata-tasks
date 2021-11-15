#include "person.h"
#include <cstring>
#include <iostream>

void Person::Show() const{
    if (lname != "")
        std::cout << fname << " " << lname << '\n';
    else
        std::cout << "Object's empty!\n";
};
void Person::FormalShow() const{
    if (lname != "")    
        std::cout << lname << ", " << fname << '\n';
    else
        std::cout << "Object's empty!\n";
};
Person::Person(){
    lname = "";
    fname[0] = '\0';
};

Person::Person(const std::string & ln, const char * fn){
    lname = ln;
    strcpy(fname, fn);
};
