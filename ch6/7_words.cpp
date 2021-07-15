//---------------C++ Primer 6th ed.----------------
//--------------Chapter 6, exercise 7--------------
#include <iostream>
#include <cctype>

int main(){
    bool isLooping = true;
    std::string input;
    int nVowels = 0;
    int nCons = 0;
    int nOther = 0;
    std::cout << "Enter words (q to quit): ";
    while (isLooping){
        std::cin >> input;
        if (isalpha(input[0])){
            if ((input.length() == 1) && (input[0] == 'q')){
                isLooping = false;
                break;
            }
            if ((input[0] == 'a') || (input[0] == 'e') || (input[0] == 'i') || (input[0] == 'o') || (input[0] == 'u'))
                nVowels++;
            else
                nCons++;
        }else 
            nOther++;
    }
    std::cout << nVowels << " words beginning with vowels\n";
    std::cout << nCons << " words beginning with consonants\n";
    std::cout << nOther << " others\n"; 
    return 0;
}
