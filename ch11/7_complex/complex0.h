#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>

class complex
{
    private:
        double real;
        double lateral;
    public:
        complex(double r, double l);
        complex();
        ~complex();
        complex operator~() const;
        complex operator+(const complex &c) const;
        complex operator-(const complex &c) const;
        complex operator*(const complex &c) const;
        complex operator*(double d) const;
        friend complex operator*(double d, const complex &c);
        friend std::ostream & operator<<(std::ostream &os, const complex &c);
        friend std::istream & operator>>(std::istream &is, complex &c);
};
#endif
