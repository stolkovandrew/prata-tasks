#include "golf.h"
#include <cstring>
#include <iostream>

extern const int Len;
void setgolf(golf& g, const char* name, int hc){
    if (strlen(name) <= Len)
        strcpy(g.fullname, name);
    g.handicap = hc;
};
int setgolf(golf& g){
    std::cout << "Please, enter full name of the player:\n";
    char tempName[Len];
    std::cin.getline(tempName, Len);
    if (!tempName[0])
        return 0;
    std::cout << "Please enter the player's handicap: ";
    int tempHc;
    std::cin >> tempHc;
    std::cin.get();
    setgolf(g, tempName, tempHc);
    return 1;
};
void handicap(golf& g, int hc){
    g.handicap = hc;
};
void showgolf(const golf& g){
    std::cout << "Player " << g.fullname << 
    "\nhas a handicap of " << g.handicap << ".\n";
};
