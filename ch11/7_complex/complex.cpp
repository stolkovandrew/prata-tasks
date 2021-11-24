#include <iostream>
#include "complex0.h"

complex::complex(double r, double l){
    real = r;
    lateral = l;
}
complex::complex(){
    real = 0.0;
    lateral = 0.0;
}
complex::~complex(){
}
complex complex::operator~() const{
    return (complex(real, -lateral));
}
complex complex::operator+(const complex &c) const{
    return (complex((real + c.real), (lateral + c.lateral)));
}
complex complex::operator-(const complex &c) const{
    return (complex((real - c.real), (lateral - c.lateral)));
}
complex complex::operator*(const complex &c) const{
    return (complex(((real * c.real) - (lateral * c.lateral)),((real * c.lateral) + (lateral * c.real))));
}
complex complex::operator*(double d) const{
    return (complex((real * d), (lateral * d)));
}
complex operator*(double d, const complex &c){
    return (c * d);
}
std::ostream & operator<<(std::ostream &os, const complex &c){
    os << c.real << ", " << c.lateral << "i";
    return os;
}
std::istream & operator>>(std::istream &is, complex &c){
    std::cout << "real part: ";
    is >> c.real;
    std::cout << "lateral part: ";
    is >> c.lateral;
    return is;
}
