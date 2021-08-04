//---------------C++ Primer 6th ed.----------------
//--------------Chapter 7, exercise 8a-------------
#include <iostream>
const int Seasons = 4;
const char * Snames[Seasons][6] = {
    {"Spring"},
    {"Summer"},
    {"Fall"},
    {"Winter"}
};

void fill(double * pa);
void show(double da[Seasons]);
int main(){
    double expenses[Seasons];
    fill(&(expenses[0]));
    show(expenses);
    return 0;
}

void fill(double * pa){
    for (int i = 0; i < Seasons; i++){
        std::cout 
        << "Enter " 
        << Snames[i][0] 
        << " expenses: ";
        std::cin >> pa[i];
    }
}
void show(double da[Seasons]){
    double total = 0.0;
    std::cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++){
        std::cout << Snames[i][0] << ": $" << da[i] << '\n';
        total += da[i];
    }
    std::cout << "Total: $" << total << '\n';
}
