#include "golf.h"
#include <cstring>
#include <iostream>

extern const int Len;
Golf::Golf(){
    fullname[0] = '\0';
    handicap = 0;
};
Golf::Golf(const char* name, int hc){
    if (strlen(name) <= Len)
        strcpy(fullname, name);
    handicap = hc;
};
int Golf::setgolf(){
    std::cout << "Please, enter full name of the player:\n";
    char tempName[Len];
    std::cin.getline(tempName, Len);
    if (!tempName[0])
        return 0;
    std::cout << "Please enter the player's handicap: ";
    int tempHc;
    std::cin >> tempHc;
    std::cin.get();
    Golf tempGolf(tempName, tempHc);
    *this = tempGolf;
    return 1;
};
int Golf::chnghc(){
    std::cout << "Enter new handicap for " << fullname << ": ";
    int temp = 0;
    if (std::cin >> temp)
        return 1;
    else
        return 0;
};
void Golf::show(){
    std::cout << "Player " << fullname << 
    "\nhas a handicap of " << handicap << ".\n";
};
