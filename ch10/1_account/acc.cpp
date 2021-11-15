#include "acc.h"
#include <iostream>
Account::Account(std::string cn, std::string an, double ab){
    clientName = cn;
    accNumber = an;
    accBalance = ab;
};
Account::~Account(){};
void Account::showAcc(){
    std::cout << "Data for acc. #" << accNumber << ":\n";
    std::cout << "Acc. holder name: " << clientName << ",\n";
    std::cout << "Acc. balance: $" << accBalance << ".\n";
};
int Account::changeBalance(double d){
    if (d > 0){
        accBalance += d;
        return 1;
    }else if (d < 0){
        if ((accBalance + d) >= 0.0){
            accBalance += d;
            return 1;
        }else{
            std::cout << "You cannot withdraw more than you have!\n";
            return 0;
        }
    }else if (d = 0){
        std::cout << "Why yes, we have a special case for that! ;)";
        return 1;
    }else{
        std::cout << "Something went wrong during\naccount balance adjustment!\n";
        return 0;
    }
};
