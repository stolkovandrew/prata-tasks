//---------------C++ Primer 6th ed.----------------
//--------------Chapter 8, exercise 3--------------
#include <iostream>
#include <cctype>
void stringToBig(std::string& str);

int main(){
    std::string strInput;
    std::cout << "Please enter the string ('q' to quit): ";
    getline(std::cin, strInput);
    while (true){
        if (strInput == "q")
            break;
        else {
            stringToBig(strInput);
            std::cout << strInput << '\n';
        }
        std::cout << "Please enter the string ('q' to quit): ";
        getline(std::cin, strInput);
    }
    std::cout << "Bye!\n";
    return 0;
}
void stringToBig(std::string& str){
    for (int i = 0; i < str.length(); i++){
        str[i] = toupper(str[i]);
    }
}
