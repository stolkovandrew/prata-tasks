//---------------C++ Primer 6th ed.-----------------
//--------------Chapter 11, exercise 5--------------
#include <iostream>
#include "stonewt.h"

int main(){
    Stonewt car(314, 12.0);
    Stonewt male(190.0);
    Stonewt female(163.0);
    Stonewt result;
    std::cout << "A car alone weighs " << car << '\n';
    std::cout << "But if we add two people inside, we get\n";
    result = car + male + female;
    std::cout << result << "\nor\n";
    result.set_mode(Stonewt::NPOUNDS);
    std::cout << result << '\n';
    std::cout << "Now imagine a bunch of friends roadtravelling:\n";
    result = car + male*2.0 + 2.0*female;
    std::cout << result << "\nor\n";
    result.set_mode(Stonewt::DPOUNDS);
    std::cout << result << '\n';
    std::cout << "Oh no! One of them fell out!\n";
    result = result - female;
    std::cout << result << '\n';
    return 0;
}
