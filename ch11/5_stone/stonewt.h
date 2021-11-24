// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>
class Stonewt
{
public:
    enum Mode {STONE = 0, DPOUNDS = 1, NPOUNDS = 2};
private:
    Mode mode;
    enum {Lbs_per_stn = 14};      // pounds per stone
    int stone;                    // whole stones
    double pds_left;              // fractional pounds
    double pounds;                // entire weight in pounds
public:
    Stonewt(double lbs);          // constructor for double pounds
    Stonewt(int stn, double lbs); // constructor for stone, lbs
    Stonewt();                    // default constructor
    ~Stonewt();
    friend std::ostream & operator<<(std::ostream &os, const Stonewt &st);
    Stonewt operator*(double n) const;
    friend Stonewt operator*(double n, const Stonewt &st);
    Stonewt operator+(const Stonewt &st) const;
    Stonewt operator-(const Stonewt &st) const;
    //Changes display mode; returns 1 if successful, 0 otherwise
    int set_mode(Mode m);
};
#endif
