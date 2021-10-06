#include "sales.h"
#include <iostream>
extern const int SALES::QUARTERS;
namespace SALES{
    void setSales(Sales& s, const double ar[], int n){
        double total = 0.0;
        double min, max;
        if (n > SALES::QUARTERS)
            n = SALES::QUARTERS;
        for (int i = 0; i < n; i++){
            s.sales[i] = ar[i];
            total += ar[i];
        }
        if (n < SALES::QUARTERS){
            for (int i = n; i < SALES::QUARTERS; i++){
                s.sales[i] = 0.0;
            }
        }
        s.average = total/SALES::QUARTERS;
        min = s.sales[0];
        max = s.sales[0];
        for (int i = 1; i < SALES::QUARTERS; i++){
            if (s.sales[i] > max)
                max = s.sales[i];
            if (s.sales[i] < min)
                min = s.sales[i];
        }
        s.max = max;
        s.min = min;
    }

    void setSales(Sales& s){
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
        setSales(s, ar, count);
    }

    void showSales(const Sales& s){
        for (int i = 0; i < SALES::QUARTERS; i++){
            std::cout << "Sales for quarter #" << i+1 
            << ": " << s.sales[i] << '\n';
        }
        std::cout << "The average number of sales for that year was " << s.average << ".\n";
        std::cout << "The minimum amount of sales for that year was " << s.min << ".\n";
        std::cout << "The maximum amount of sales for that year was " << s.max << ".\n";
    }
}
