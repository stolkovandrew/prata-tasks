//---------------C++ Primer 6th ed.----------------
//--------------Chapter 9, exercise 1--------------
#include <iostream>
#include <cstring>
#include "golf.h"
extern const int Len;

int main(){
    golf players[5];
    int count = 0;
    for (int i = 0; i < 5; i++){
        if (setgolf(players[i])){
            count++;
            continue;
        }else
            break;
    }
    for (int i = 0; i < count; i++){
        showgolf(players[i]);
    }
    bool isLooping = true;
    std::cout << "Now you can update players' scores. (q to quit)\n";
    while (isLooping){
        for (int i = 0; i < count; i++){
            int temp = 0;
            std::cout << "Enter new handicap for " 
            << players[i].fullname << ": ";
            if (std::cin >> temp)
                handicap(players[i], temp);
            else{
                isLooping = false;
                break;
            }
        }
        for (int i = 0; i < count; i++){
            showgolf(players[i]);
        }
    }
    std::cout << "Bye!\n";
    return 0;
}
