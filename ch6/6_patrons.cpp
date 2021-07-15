//---------------C++ Primer 6th ed.----------------
//--------------Chapter 6, exercise 6--------------
#include <iostream>

struct patron{
    std::string name;
    double donation;
};
int main(){
    int nPatrons = 0;
    int nGrandCount = 0;
    int nRegCount = 0;
    std::cout << "Please enter the number of patrons: ";
    std::cin >> nPatrons;
    std::cin.get();
    patron* p_Patrons = new patron[nPatrons];
    for (int i = 0; i < nPatrons; i++){
        std::cout << "Patron #" << i+1;
        std::cout << "\nEnter patron's name: ";
        getline(std::cin, p_Patrons[i].name);
        std::cout << "Enter the donation amount: ";
        std::cin >> p_Patrons[i].donation;
        std::cin.get();
    }
    std::cout << "Grand Patrons: ";
    for (int i = 0; i < nPatrons; i++){
        if (p_Patrons[i].donation >= 10000.0){
            std::cout << "\n" << p_Patrons[i].name << " donated $" << p_Patrons[i].donation;
            nGrandCount++;
        } 

    }
    if (nGrandCount == 0)
        std::cout << "\nnone";
    std::cout << "\nPatrons: ";
    for (int i = 0; i < nPatrons; i++){
        if (p_Patrons[i].donation < 10000.0){
            std::cout << "\n" << p_Patrons[i].name << " donated $" << p_Patrons[i].donation;
            nRegCount++;
        }
    }
    if (nRegCount == 0)
        std::cout << "\nnone";
    std::cout << std::endl;
    delete [] p_Patrons;
    return 0;
}
