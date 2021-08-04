//---------------C++ Primer 6th ed.----------------
//--------------Chapter 7, exercise 2--------------
#include <iostream>
int fillArray(int arr[], int size);
void showArray(const int arr[], int size);
double averageArray(const int arr[], int size);

int main(){
    const int ARRSIZE = 10;
    int nCount = 0;
    int nResults[ARRSIZE];
    std::cout << "Enter up to " << ARRSIZE << " results (enter -1 to stop short):\n";
    nCount = fillArray(nResults, ARRSIZE);
    std::cout << "You've entered " << nCount
    << " results:\n";
    showArray(nResults, nCount);
    std::cout << "\nThe average value of the above is " << averageArray(nResults, nCount);
    std::cout << "\nBye!\n";
    return 0;
}
int fillArray(int arr[], int size){
    int temp = 0;
    int count = 0;
    for (count; count < size; count++){
        std::cout << "Enter value #" << count + 1 << ": ";
        std::cin >> temp;
        if (temp > 0)
            arr[count] = temp;
        else
            break;
    }
    return count;
}
void showArray(const int arr[], int size){
    for (int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}
double averageArray(const int arr[], int size){
    double sum = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum/size;
}
