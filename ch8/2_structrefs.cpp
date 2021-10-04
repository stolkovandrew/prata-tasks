//---------------C++ Primer 6th ed.----------------
//--------------Chapter 8, exercise 2--------------
#include <iostream>
#include <cstring>
const int STRLEN = 30;
struct CandyBar{
    char charrName[STRLEN];
    double dWeight;
    int nCal;
};
void setStruct(CandyBar& strct, char* name, double weight, int cal);
void showStruct(const CandyBar& strct);

int main(){
    CandyBar structCandy;
    std::cout << "Please, enter the name of the candy bar: ";
    char charrInputName[STRLEN];
    std::cin.getline(charrInputName, STRLEN);
    std::cout << "Please enter it's weight in grams: ";
    double dInputWeight;
    std::cin >> dInputWeight;
    std::cout << "And it's calorie count: ";
    int nInputCal;
    std::cin >> nInputCal;
    std::cout << "Setting up the structure...\n";
    setStruct(structCandy, charrInputName, dInputWeight, nInputCal);
    std::cout << "Displaying the structure...\n";
    showStruct(structCandy);
    std::cout << "Bye!\n";
    return 0;
}
void setStruct(CandyBar& strct, char* name, double weight, int cal){
    strcpy(strct.charrName, name);
    strct.dWeight = weight;
    strct.nCal = cal;
}
void showStruct(const CandyBar& strct){
    std::cout << "Candy name: " << strct.charrName << '\n';
    std::cout << "    weight: " << strct.dWeight << " grams\n";
    std::cout << "cal. count: " << strct.nCal << " calories\n";
}
