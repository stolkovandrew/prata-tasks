//---------------C++ Primer 6th ed.----------------
//--------------Chapter 7, exercise 7--------------
#include <iostream>
const int Max = 5;
double * fill_array(double ar[], double end[]);
void show_array(const double ar[], double end[]);
void revalue(double r, double ar[], double end[]);

int main(){
    double properties[Max];
    double * p_first = properties;
    double * p_abs_end = properties + Max;
    double * p_end = fill_array(p_first, p_abs_end);
    show_array(p_first, p_end);
    if (p_end > p_first){
        std::cout << "Enter revaluation factor: ";
        double factor;
        while (!(std::cin >> factor)){
            std::cin.clear();
            while (std::cin.get() != '\n')
                continue;
           std::cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, p_first, p_end);
        show_array(p_first, p_end);
    }
    std::cout << "Done.\n";
    return 0;
}
double * fill_array(double ar[], double end[]){
    double temp;
    int i;
    for (i = 0; i < (end - ar); i++){
        std::cout << "Enter value #" << (i + 1) << ": ";
        std::cin >> temp;
        if (!std::cin){
            std::cin.clear();
            while (std::cin.get() != '\n')
                continue;
           std::cout << "Bad input; input process terminated.\n";
           break;
        }
        else if (temp < 0)
            break;
        ar[i] = temp;
    }
    return ar + i;
}
void show_array(const double ar[], double end[]){
    for (int i = 0; i < (end - ar); i++){
        std::cout << "Property #" << (i + 1) << ": $";
        std::cout << ar[i] << "\n";
    }
}
void revalue(double r, double ar[], double end[]){
    for (int i = 0; i < (end - ar); i++)
        ar[i] *= r;
}
