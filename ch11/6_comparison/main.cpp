//---------------C++ Primer 6th ed.-----------------
//--------------Chapter 11, exercise 6--------------
#include <iostream>
#include "stonewt.h"

int main(){
    Stonewt arStone[6] = 
    {
        {13, 2.49},
        {15, 8.5},
        {7, 4.32}       
    };
    Stonewt elevenStone(11, 0.0);
    int inStone;
    double inPouds;
    for (int i = 3; i < 6; i++){
        std::cout << "Please enter the weight.\nStone: ";
        std::cin >> inStone;
        std::cout << "Pounds: ";
        std::cin >> inPouds;
        if (inStone == 0)
            arStone[i] = Stonewt(inPouds);
        else
            arStone[i] = Stonewt((inStone + inPouds/14)
            , (inPouds - (int(inPouds)%14)));
    }
    int max = 0;
    int min = 0;
    int goet11 = 0; //greater or equal to 11
    for (int i = 0; i < 6; i++){
        if (arStone[i] > arStone[max])
            max = i;
        if (arStone[i] < arStone[min])
            min = i;
        if (arStone[i] >= elevenStone)
            goet11 += 1;
    }
    std::cout <<   "Here's the maximum: ";
    arStone[max].show_stn();
    std::cout << "\n           minimum: ";
    arStone[min].show_stn();
    std::cout << "\nThe number of weights >= 11 stone is " << goet11;
    std::cout << "\nBye!\n";
    return 0;
}
