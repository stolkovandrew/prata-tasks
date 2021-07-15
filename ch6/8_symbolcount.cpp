//---------------C++ Primer 6th ed.----------------
//--------------Chapter 6, exercise 8--------------
#include <iostream>
#include <fstream>
#include <cstdlib>
const int SIZE = 60;

int main(){
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
    int nCount = 0;
    inFile.get();
    while (inFile.good()){
        ++nCount;
        inFile.get();
    }
    if (inFile.eof())
        std::cout << "EOF reached.\n";
    else
        std::cout << "Input terminated for unknown reason.\n";
    std::cout << "Characters read: " << nCount << "\n";
    inFile.close();
    return 0;
}
