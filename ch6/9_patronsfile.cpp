//---------------C++ Primer 6th ed.----------------
//--------------Chapter 6, exercise 9--------------
#include <iostream>
#include <fstream>
#include <cstdlib>
const int SIZE = 60;

struct patron{
    std::string name;
    double donation;
};
int main(){
    int nPatrons = 0;
    int nGrandCount = 0;
    int nRegCount = 0;
    char charrFilename[SIZE];
    std::ifstream inFile;
    std::cout << "Enter the filename: ";
    std::cin.getline(charrFilename, SIZE);
    inFile.open(charrFilename);
    if (!inFile.is_open()){
        std::cout << "Couldn't open the file " << charrFilename << "\n";
        std::cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    inFile >> nPatrons;
    inFile.get();
    patron* p_Patrons = new patron[nPatrons];
    for (int i = 0; i < nPatrons; i++){
        getline(inFile, p_Patrons[i].name);
        inFile >> p_Patrons[i].donation;
        inFile.get();
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
