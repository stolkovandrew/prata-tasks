//---------------C++ Primer 6th ed.----------------
//--------------Chapter 7, exercise 3--------------
#include <iostream>
struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void boxShow(box input);
void boxVolume(box* input);

int main(){
    box boxInput;
    std::cout << "Enter boxmaker's name: ";
    std::cin.getline(boxInput.maker, 40);
    std::cout << "Enter box height: ";
    std::cin >> boxInput.height;
    std::cout << "Enter box width: ";
    std::cin >> boxInput.width;
    std::cout << "Enter box lenght: ";
    std::cin >> boxInput.length;
    std::cout << "Calculating volume...";
    boxVolume(&boxInput);
    boxShow(boxInput);
    std::cout << "\nBye!\n";
    return 0;
}
void boxShow(box input){
    std::cout << "\nBox maker: " << input.maker;
    std::cout << "\nHeight: " << input.height;
    std::cout << "\nWidth: " << input.width;
    std::cout << "\nLength: " << input.length;
    std::cout << "\nVolume: " << input.volume;
}
void boxVolume(box* input){
    input->volume = input->height * input->width * input->length;
}
