//---------------C++ Primer 6th ed.----------------
//--------------Chapter 8, exercise 4--------------
#include <iostream>
#include <cstring>

struct stringy{
    char * str;
    int ct;
};

void show(const stringy& strct, int n = 1);
void show(const char* str, int n = 1);
void set(stringy& strct, char* str);

int main(){
    stringy beany;
    char testing [] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    return 0;
}
void show(const stringy& strct, int n){
    for (n; n > 0; n--){
        std::cout << strct.str << '\n';
    }
}
void show(const char* str, int n){
    for (n; n > 0; n--){
        std::cout << str << '\n';
    }
}
void set(stringy& strct, char* str){
    char* temp = new char[strlen(str)];
    temp = str;
    strct.str = temp;
    strct.ct = strlen(str);
}
