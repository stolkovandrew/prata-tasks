//---------------C++ Primer 6th ed.----------------
//--------------Chapter 8, exercise 7--------------
#include <iostream>
template <typename T>   
T SumArray(T arr[], int n);
template <typename T>   
T SumArray(T * arr[], int n);
struct debts{
    char name[50];
    double amount;
};

int main(){
    int things[6] = {13, 31, 103, 301, 310, 130};
    int nThingsSum;
    struct debts mr_E[3] = {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double * pd[3]; // set pointers to the amount members of the structures in mr_E
    for (int i = 0; i < 3; i++){
        pd[i] = &mr_E[i].amount;
    }
    double dDebtsSum;
    nThingsSum = SumArray(things, 6); 
    dDebtsSum = SumArray(pd, 3); 
    std::cout << "The total amount of mr. E's things is: " << nThingsSum << '\n';
    std::cout << "                             debts is: " << dDebtsSum << '\n';
    return 0;
}
template <typename T>
T SumArray(T arr[], int n){
T sum;
for (int i = 0; i < n; i++)
    sum += arr[i];
return sum;
}
template <typename T>
T SumArray(T * arr[], int n){
T sum;
for (int i = 0; i < n; i++)
    sum += *arr[i];
return sum;
}
