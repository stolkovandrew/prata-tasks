//---------------C++ Primer 6th ed.----------------
//--------------Chapter 6, exercise 2--------------
#include <iostream>

int main(){
    double darrInput[10];
    std::cout << "Enter up to 10 values ('q' to stop): \n";
    double dTotal;
    int i = 0;
    do{
        std::cout << "Enter value " << i+1 << ": ";
        std::cin >> darrInput[i];
        if (std::cin.good()){
            dTotal += darrInput[i];
            i++;}
        else
            break;
    } while (i < 10);
    double dAverage = dTotal/i;
    int nAboveAverage = 0;
    for (int j = 0; j <= i; j++){
        if (darrInput[j] > dAverage)
            nAboveAverage++;
    }
    std::cout << "The average of all " << i << " values: " << dAverage;
    std::cout << "\nOf that " << nAboveAverage << " values were above average\n";
    return 0;
}
