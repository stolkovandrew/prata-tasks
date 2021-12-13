//---------------C++ Primer 6th ed.-----------------
//--------------Chapter 11, exercise 4--------------
#include <iostream>
#include "stack.h"

int main()
{
    std::cout << "Enter the desired size of your stack: ";
    int size;
    std::cin >> size;
    Stack stackOne(size);
    int num;
    for (int i = 0; i < size; i++)
    {
        std::cout << "#" << i + 1 << ": ";
        if (std::cin >> num)
        {
        if (stackOne.isfull())
            std::cout << "stack's full!\n";
        else
            stackOne.push(num);
        }else
            break;
    }
    std::cout << "Now let us make a couple of copies.\n";
    Stack stackTwo(stackOne);
    Stack stackThree; stackThree = stackTwo;
    std::cin.get();
    std::cout << "We have three copies of your stack,\nnow you can choose from which \nto pop numbers out:\n";
    std::cout << "1) pop from stackOne,\n2) pop from stackTwo,\n3) pop from stackThree\n>>";
    int n;
    unsigned long currentNumber;
    while (std::cin >> n)
    {
        switch (n)
        {
        case 1:
            if (stackOne.isempty())
                std::cout << "This stack is empty!\n";
            else
            {
                stackOne.pop(currentNumber);
                std::cout << "Popped " << currentNumber << '\n';
            }
            break;
        case 2:
            if (stackTwo.isempty())
                std::cout << "This stack is empty!\n";
            else
            {
                stackTwo.pop(currentNumber);
                std::cout << "Popped " << currentNumber << '\n';
            }
            break;
        case 3:
            if (stackThree.isempty())
                std::cout << "This stack is empty!\n";
            else
            {
                stackThree.pop(currentNumber);
                std::cout << "Popped " << currentNumber << '\n';
            }
            break;
        default: std::cout << "Not an option!\n";
            break;
        }
        std::cout << "1) pop from stackOne,\n2) pop from stackTwo,\n3) pop from stackThree\n>>";
    }
    std::cout << "Bye!\n";
    return 0;
}
