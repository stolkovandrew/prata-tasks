//---------------C++ Primer 6th ed.-----------------
//--------------Chapter 11, exercise 3--------------
// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
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
    int tries = 0;
    unsigned long maxSteps = 0;
    unsigned long minSteps = 0;
    unsigned long totalSteps = 0;
    unsigned long averageSteps = 0;
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;
        cout << "Enter the number of tries: ";
        if (!(cin >> tries))
            break;
        for (int i = 0; i < tries; i++){
            while (result.magval() < target)
            {
                direction = rand() % 360;
                step.reset(dstep, direction, VECTOR::Vector::POL);
                result = result + step;
                steps++;
            }
            result.reset(0.0, 0.0);
            cout << "DEBUG: Try #" << i << ": " << steps << " steps\n";
            if (i == 0)
                minSteps = steps;
            totalSteps += steps;
            if (maxSteps < steps)
                maxSteps = steps;
            if (minSteps > steps)
                minSteps = steps;
            steps = 0;
        }
        averageSteps = totalSteps/tries;
        cout << tries << " tries were made.\n";
        cout << "Steps to target, maximum: " << maxSteps << '\n';
        cout << "                 minimum: " << minSteps << '\n';
        cout << "                 average: " << averageSteps << '\n';
        cout << "                   total: " << totalSteps << '\n';
        totalSteps = 0;
        maxSteps = 0;
        minSteps = 0;
        averageSteps = 0;
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
/* keep window open
    cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0; 
}
