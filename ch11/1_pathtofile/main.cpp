//---------------C++ Primer 6th ed.-----------------
//--------------Chapter 11, exercise 1--------------
// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <fstream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "vector.h"
int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    ofstream fout;
    fout.open("path.txt");
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        fout << "Target distance: " << target << ", step length: " << dstep << '\n';
        fout << steps << ": (x, y) = " << result << '\n';
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, VECTOR::Vector::POL);
            result = result + step;
            steps++;
            fout << steps << ": (x, y) = " << result << '\n';
        }
        cout << "After " << steps << " steps, the subject "
            "has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        cout << "Average outward distance per step = "
            << result.magval()/steps << endl;
        result.rect_mode();
        fout << "After " << steps << " steps, the subject "
            "has the following location:\n";
        fout << result << endl;
        result.polar_mode();
        fout << " or\n" << result << endl;
        fout << "Average outward distance per step = "
            << result.magval()/steps << endl;    
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    fout.close();
/* keep window open
    cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0; 
}
