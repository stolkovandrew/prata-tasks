// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn;    // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    mode = STONE;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn +lbs;
    mode = STONE;
}

Stonewt::Stonewt()          // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
    mode = STONE;
}

Stonewt::~Stonewt()         // destructor
{
}

std::ostream & operator<<(std::ostream &os, const Stonewt &st)
{
    switch (st.mode)
    {
    case Stonewt::STONE:
        cout << st.stone << " stone, " << st.pds_left << " pounds";
        return os;
        break;
    case Stonewt::DPOUNDS:
        cout << st.pounds << " pounds";
        return os;
        break;
    case Stonewt::NPOUNDS:
        cout << int(st.pounds + 0.5) << " pounds";
        return os;
        break;
    
    default:
        cout << "Display mode set incorrectly.";
        return os;
        break;
    }
}

Stonewt Stonewt::operator*(double n) const
{
    if (n > 0)
        return (Stonewt(pounds * n));
    else if (n == 0)
        return Stonewt(n);
    else
    {
        cout << "Can't have negative weight!\n";
        return *this;
    }
}

Stonewt operator*(double n, const Stonewt &st)
{
    return (st * n);
}

Stonewt Stonewt::operator+(const Stonewt &st) const
{
    return (Stonewt(pounds + st.pounds));
}
    
Stonewt Stonewt::operator-(const Stonewt &st) const
{
    return (Stonewt(pounds - st.pounds));
}

int Stonewt::set_mode(Mode m)
{
    if (m < 3 && m >= 0)
    {
        mode = m;
        return 1;
    }
    else
        return 0;

}
