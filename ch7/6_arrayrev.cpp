//---------------C++ Primer 6th ed.----------------
//--------------Chapter 7, exercise 6--------------
#include <iostream>
int Fill_array(double arr[], int size);
void Show_array(const double arr[], int size);
void Reverse_array(double arr[], int size);

int main(){
    const int ARRSIZE = 10;
    int nCount = 0;
    double dInput[ARRSIZE];
    std::cout << "Enter up to " << ARRSIZE << " values (enter -1 to stop short):\n";
    nCount = Fill_array(dInput, ARRSIZE);
    Reverse_array(dInput + 1, nCount - 2);
    std::cout << "Here's your processed input: ";
    Show_array(dInput, nCount);
    std::cout << "Bye!\n";
    return 0;
}
int Fill_array(double arr[], int size){
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
void Show_array(const double arr[], int size){
    for (int i = 0; i < size; i++){
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
}
void Reverse_array(double arr[], int size){
    int i = 0;
    int j = size - 1;
    double temp = 0.0;
    for (i, j; i < j; i++, j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
