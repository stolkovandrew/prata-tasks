//---------------C++ Primer 6th ed.----------------
//--------------Chapter 5, exercise 7--------------
#include <iostream>
#include <string>

struct car{
    std::string strManufacturer;
    int nYear;
};
int main(){
    int nQuantity = 0;
    std::cout << "How big is your collection?: ";
    std::cin >> nQuantity;
    car* p_arrCars = new car[nQuantity];
    for (int i = 0; i < nQuantity; i++){
        std::cin.get();
        std::cout << "Car #" << i+1;
        std::cout << "\nEnter the manufacturer: ";
        std::getline(std::cin,p_arrCars[i].strManufacturer);
        std::cout << "Enter the production year: ";
        std::cin >> p_arrCars[i].nYear;
    };
    std::cout << "\nYour collection: \n";
    for (int i = 0; i < nQuantity; i++)
        std::cout << p_arrCars[i].nYear << " " << p_arrCars[i].strManufacturer << std::endl;
    delete [] p_arrCars;
    return 0;
}