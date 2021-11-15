#include <iostream>
#include "move.h"

Move::Move(double a, double b){
    x = a;
    y = b;
}
void Move::showmove() const{
    std::cout << "x = " << x << '\n';
    std::cout << "y = " << y << '\n';
}
Move Move::add(const Move &m) const{
    double tempX = 0.0;
    double tempY = 0.0;
    tempX = x + m.x;
    tempY = y + m.y;
    return Move(tempX, tempY);
}
void Move::reset(double a, double b){
    x = a;
    y = b;
}
