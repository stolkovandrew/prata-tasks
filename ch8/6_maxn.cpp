//---------------C++ Primer 6th ed.----------------
//--------------Chapter 8, exercise 6--------------
#include <iostream>
#include <cstring>
template<typename T>
T maxn(T in[], int n){
    T currmax = in[n-1];
    for (int i = n; i > 0; i--){
        if (in[i-1] > in[i])
            currmax = in[i-1];
    }
    return currmax;
}
template <> const char* maxn(const char* in[], int n){
    const char* currmax = in[n-1];
    for (int i = n-1; i > 0; i--){
        if (strlen(in[i]) > strlen(in[i-1]))
            currmax = in[i];
    }
    return currmax;
}

int main(){
    int nArray[] = {1905, 1861, 1242, 1916, 1915, 1613};
    double dArray[] = {6.9, 4.20, 3.1415926, 2.7182818};
    const char* cstrArray[] = {
        "This string is moderately long",
        "T'is a short one",
        "ghfghfghkjlgjhlfjglhjflgjhlfgjhlfjghljfghjflhjflhjflgjhlfjghlfjghljlfjg",
        "While both of out situations are quite precarious, there is some nuance",
        "Even shorter"
    };
    int nMax = maxn(nArray, 6);
    double dMax = maxn(dArray, 4);
    const char* cstrMax = maxn(cstrArray, 5);
    std::cout << "Maximums are: " << nMax << " for integers\n";
    std::cout << "and " << dMax << " for doubles.\n";
    std::cout << "The longest string is:\n";
    std::cout << cstrMax << '\n';
    std::cout << "Bye!\n";
    return 0;
}
