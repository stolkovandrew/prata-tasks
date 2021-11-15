//---------------C++ Primer 6th ed.----------------
//--------------Chapter 10, exercise 5--------------
#include <iostream>
#include "stack.h"
#include "customer.h"

int main(){
    customer currentCustomer;
    Stack customerStack;
    char ch;
    double dTotal = 0.0;
    std::cout << "Please enter A to add a customer, D to delete top one,\n"
        << "T to display current total payment or Q to quit.\n";
    while (std::cin >> ch && toupper(ch) != 'Q'){
        while (std::cin.get() != '\n')   
            continue;
        if (!isalpha(ch)){
            std::cout << '\a';
            continue;
        }
        switch(ch){
            case 'A':
            case 'a': std::cout << "Enter the name of the customer to add:\n";
                std::cin.getline(currentCustomer.fullname, 35);
                std::cout << "Enter the payment: ";
                std::cin >> currentCustomer.payment;
                if (customerStack.isfull())
                    std::cout << "stack's already full\n";
                else
                    customerStack.push(currentCustomer);
                break;
            case 'D':
            case 'd': if (customerStack.isempty())
                std::cout << "stack's already empty\n";
                else{
                    customerStack.pop(currentCustomer);
                    std::cout << "Customer " << currentCustomer.fullname << " popped\n";
                    std::cout << '$' << currentCustomer.payment << " added to total.\n";
                    dTotal += currentCustomer.payment;
                }
                break;
            case 'T':
            case 't': std::cout << "Current total payment is $" << dTotal << '\n';
                break;
        }
        std::cout << "Please enter A to add a customer, D to delete top one,\n"
        << "T to display current total payment or Q to quit.\n";
    }
    std::cout << "Bye\n";
    return 0;
}
