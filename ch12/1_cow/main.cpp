//---------------C++ Primer 6th ed.-----------------
//--------------Chapter 11, exercise 1--------------
#include <iostream>
#include "cow.h"

int main(){
    Cow dolly("Dolly", "Eating grass", 2000.0);
    char tempName[20];
    char tempHobby[80];
    double tempWeight;
    std::cout << "Enter the name of your cow: ";
    std::cin.getline(tempName, 19);
    std::cout << "...it's hobby: ";
    std::cin.getline(tempHobby, 79);
    std::cout << "...it's weight: ";
    std::cin >> tempWeight;
    Cow userCow(tempName, tempHobby, tempWeight);
    std::cout << "Cool! Your cow: ";
    userCow.ShowCow();
    std::cout << "Our cow: ";
    dolly.ShowCow();
    std::cout << "Now let's make a new cow out of out Dolly: \nCow dolly2(dolly)";
    Cow dolly2(dolly);
    dolly2.ShowCow();
    std::cout << "That was easy. Now it's your cow's turn, \nbut we're gonna do it a bit differently this time: \nCow userCow2;\nuserCow2 = userCow;";
    Cow userCow2;
    userCow2 = userCow;
    userCow2.ShowCow();
    std::cout << "That's it. Bye!\n";
    return 0;
}
