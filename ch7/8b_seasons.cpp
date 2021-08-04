//---------------C++ Primer 6th ed.----------------
//--------------Chapter 7, exercise 8b-------------
#include <iostream>
const int Seasons = 4;
const char * Snames[Seasons][6] = {
    {"Spring"},
    {"Summer"},
    {"Fall"},
    {"Winter"}
};
struct exps{
    double value[Seasons];
};


void fill(exps * ps);
void show(exps ds);
int main(){
    exps expenses;
    fill(&expenses);
    show(expenses);
    return 0;
}

void fill(exps * ps){
    for (int i = 0; i < Seasons; i++){
        std::cout 
        << "Enter " 
        << Snames[i][0] 
        << " expenses: ";
        std::cin >> ps->value[i];
    }
}
void show(exps ds){
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++){
        std::cout << Snames[i][0] << ": $" << ds.value[i] << '\n';
        total += ds.value[i];
    }
    std::cout << "Total: $" << total << '\n';
}
