#include "sales.h"
#include <iostream>
extern const int SALES::QUARTERS;
namespace SALES{
    Sales::Sales(){
        for (int i = 0; i < QUARTERS; i++){
            sales[i] = 0.0;
        }
        average = 0.0;
        max = 0.0;
        min = 0.0;
    };
    Sales::Sales(const double ar[], int n){
        double total = 0.0;
        if (n > SALES::QUARTERS)
            n = SALES::QUARTERS;
        for (int i = 0; i < n; i++){
            sales[i] = ar[i];
            total += ar[i];
        }
        if (n < SALES::QUARTERS){
            for (int i = n; i < SALES::QUARTERS; i++){
                sales[i] = 0.0;
            }
        }
        average = total/SALES::QUARTERS;
        min = sales[0];
        max = sales[0];
        for (int i = 1; i < SALES::QUARTERS; i++){
            if (sales[i] > max)
                max = sales[i];
            if (sales[i] < min)
                min = sales[i];
        }
        //max = max;
        //min = min;
    }

    void Sales::set(){
        double ar[SALES::QUARTERS];
        double temp;
        int count = 0;
        std::cout << "Enter sales numbers for...(q to quit)\n";
        for (int i = 0; i < SALES::QUARTERS; i++){
            std::cout << "...quarter #" 
            << i+1 << ": ";
            if (std::cin >> temp){
                ar[i] = temp;
                count++;
            }else{
                std::cout << "Quitting!\n";
                break;
            }
        }
        Sales tempSales(ar, count);
        *this = tempSales;
    }

    void Sales::show(){
        for (int i = 0; i < SALES::QUARTERS; i++){
            std::cout << "Sales for quarter #" << i+1 
            << ": " << sales[i] << '\n';
        }
        std::cout << "The average number of sales for that year was " << average << ".\n";
        std::cout << "The minimum amount of sales for that year was " << min << ".\n";
        std::cout << "The maximum amount of sales for that year was " << max << ".\n";
    }
}
