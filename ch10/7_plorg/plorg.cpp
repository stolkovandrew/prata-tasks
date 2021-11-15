#include <iostream>
#include <cstring>
#include "plorg.h"

Plorg::Plorg(char nm[20], int in){
    strcpy(name, nm);
    ci = in;
}
void Plorg::setci(int in){
    ci = in;
}
void Plorg::showplorg(){
    std::cout << "Name: " << name << '\n';
    std::cout << "CI: " << ci << '\n';
}
