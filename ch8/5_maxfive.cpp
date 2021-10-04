//---------------C++ Primer 6th ed.----------------
//--------------Chapter 8, exercise 5--------------
#include <iostream>
template<typename T>
T max5(T in[5]){
    T currmax = in[0];
    for (int i = 1; i < 5; i++){
        if (in[i] > in[i-1])
            currmax = in[i];
    }
    return currmax;
}

int main(){
    int nArray[] = {1905, 1861, 1242, 1916, 1915};
    double dArray[] = {6.9, 4.20, 3.1415926, 2.7182818, 1.6180339};
    int nMax = max5(nArray);
    double dMax = max5(dArray);
    std::cout << "Maximums are: " << nMax << " for integers\n";
    std::cout << "and " << dMax << " for doubles.\n";
    std::cout << "Bye!\n";
    return 0;
}
