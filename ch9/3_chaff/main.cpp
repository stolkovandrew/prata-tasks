//---------------C++ Primer 6th ed.----------------
//--------------Chapter 9, exercise 3--------------
#include <iostream>
#include <cstring>
#include <new>
struct chaff{
    char dross[20];
    int slag;
};
void* buffer =  ::operator new(2*(20*sizeof(char) + sizeof(int)));

int main(){
    chaff* pchaff = new(buffer) chaff[2];
    strcpy(pchaff[0].dross, "Wibbly Wobbly");
    pchaff[0].slag = 183;
    strcpy(pchaff[1].dross, "Honky Wonky");
    pchaff[1].slag = 420;
    std::cout << "Here are the structures:\n";
    for (int i = 0; i < 2; i++){
        std::cout << "Structure #" << i+1 << ":\n";
        std::cout << pchaff[i].dross << ", " 
        << pchaff[i].slag << ".\n";
    }
    std::cout << "That's all. Bye!\n";
    delete[] pchaff;
    return 0;
}
