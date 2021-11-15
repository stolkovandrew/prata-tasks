#include <iostream>
#include "list.h"

List::List(){
    for (int i = 0; i < 20; i++){
        array[i] = 0.0;
    }
    index = 0;
};
int List::add(double d){
    if (index < 20){
        array[index] = d;
        index++;
        return 1;
    }else
        return 0;
};
int List::isFull(){
    if (index >= 20)
        return 1;
    else
        return 0;
};
int List::isEmpty(){
    if (index == 0)
        return 1;
    else 
        return 0;
};
void List::show(){
    if (this->isEmpty()){
        std::cout << "List is empty, nothing to show.\n";
    }else{
        std::cout << array[0];
        for (int i = 1; i < index; i++){
            std::cout << ", " << array[i];
            if (!(i%10))
                std::cout << '\n';
        }
        std::cout << ".\n";
    }
};
void List::visit(void (*pf) (double &)){
    for (int i = 0; i < index; i++){
        pf(array[i]);
    }
}
void mul2(double &d){
    d *= 2;
}
void mul5(double &d){
    d *= 5; 
}
