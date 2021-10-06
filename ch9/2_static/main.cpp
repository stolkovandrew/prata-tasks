//---------------C++ Primer 6th ed.----------------
//--------------Chapter 9, exercise 2--------------
#include <iostream>
void strcount(std::string str);

int main(){
    std::string input;

    std::cout << "Enter a line:\n";
    getline(std::cin, input);
    while (true){
        if (input == "")
            break;
        else{
        strcount(input);
        std::cout << "Enter next line (empty line to quit):\n";
        getline(std::cin, input);
        }
    }
    std::cout << "Bye\n";
    return 0;
}

void strcount(std::string str){
    static int total = 0;        // static local variable
    int count = 0;               // automatic local variable

    std::cout << "\"" << str <<"\" contains ";
    count = str.length();
    total += count;
    std::cout << count << " characters\n";
    std::cout << total << " characters total\n";
}
