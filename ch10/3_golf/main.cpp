//---------------C++ Primer 6th ed.----------------
//--------------Chapter 10, exercise 3--------------
#include <iostream>
#include <cstring>
#include "golf.h"
extern const int Len;

int main(){
    Golf players[5];
    int count = 0;
    for (int i = 0; i < 5; i++){
        if (players[i].setgolf()){
            count++;
            continue;
        }else
            break;
    }
    for (int i = 0; i < count; i++){
        players[i].show();
    }
    bool isLooping = true;
    std::cout << "Now you can update players' scores. (q to quit)\n";
    while (isLooping){
        for (int i = 0; i < count; i++){
            if (players[i].chnghc())
                {}
            else{
                isLooping = false;
                break;
            }
        }
        for (int i = 0; i < count; i++){
            players[i].show();
        }
    }
    std::cout << "Bye!\n";
    return 0;
}
