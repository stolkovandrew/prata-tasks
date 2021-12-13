//---------------C++ Primer 6th ed.-----------------
//--------------Chapter 11, exercise 6--------------
// bank.cpp -- using the Queue interface
// compile with queue.cpp
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
#include "queue.h"
const int MIN_PER_HR = 60;

bool newcustomer(double x); // is there a new customer?

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;
// setting things up
    std::srand(std::time(0));    //  random initializing of rand()

    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;
    

    int hours = 100;              //  hours of simulation
    // simulation will run 1 cycle per minute
    long cyclelimit = MIN_PER_HR * hours; // # of cycles

    double perhour;         //  average # of arrival per hour
    
    double min_per_cust;    //  average time between arrivals

    long double avg_wait = 0.0;
    long turnaways;     //  turned away by full queue
    long customers;     //  joined the queue
    long served;        //  served during the simulation
    long sum_line;      //  cumulative line length
    int wait_time_one;      //  time until autoteller is free
    int wait_time_two;
    long line_wait;     //  cumulative time in line
// running the simulation
    for (perhour = 0.0; avg_wait <= 1.0; perhour += 0.1)
    {
        min_per_cust = MIN_PER_HR / perhour;
        cout << "Trying with " << perhour << " cust/hour";
        Item temp_one;              //  new customer data
        Item temp_two;
        turnaways = 0;     //  turned away by full queue
        customers = 0;     //  joined the queue
        served = 0;        //  served during the simulation
        sum_line = 0;      //  cumulative line length
        wait_time_one = 0;      //  time until autoteller is free
        wait_time_two = 0;
        line_wait = 0;     //  cumulative time in line
        Queue line_one(qs);         // line queue holds up to qs people
        Queue line_two(qs);
        for (int cycle = 0; cycle < cyclelimit; cycle++)
        {
            if (newcustomer(min_per_cust))  // have newcomer
            {
                if (line_one.isfull())
                {
                    if (line_two.isfull())
                        turnaways++;
                    else
                    {
                        customers++;
                        temp_two.set(cycle);    // cycle = time of arrival
                        line_two.enqueue(temp_two); // add newcomer to line
                    }
                }
                else
                {
                    customers++;
                    temp_one.set(cycle);    // cycle = time of arrival
                    line_one.enqueue(temp_one); // add newcomer to line
                }
            }
            if (wait_time_one <= 0 && !line_one.isempty())
            {
                line_one.dequeue (temp_one);      // attend next customer
                wait_time_one = temp_one.ptime(); // for wait_time minutes
                line_wait += cycle - temp_one.when();
                served++;
            }
            if (wait_time_one > 0)
                wait_time_one--;
            
            if (wait_time_two <= 0 && !line_two.isempty())
            {
                line_two.dequeue (temp_two);      // attend next customer
                wait_time_two = temp_two.ptime(); // for wait_time minutes
                line_wait += cycle - temp_two.when();
                served++;
            }
            if (wait_time_two > 0)
                wait_time_two--;
        }

    // reporting results
        if (customers > 0)
        {
            avg_wait = (long double) line_wait / served;
        }
        else
            avg_wait = 0.0;
        cout << " -- avg. wait is " << avg_wait;
        cout << " -- " << served << " custs served";
        cout << " -- " << turnaways << " turnaways\n";
    }
    cout << "Done!\n";
    cout << "Maximum number of customers per hour for < 1 min avg. wait time is " << perhour << ".\n";
    // cin.get();
    // cin.get();
    return 0;
}

//  x = average time, in minutes, between customers
//  return value is true if customer shows up this minute
bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1); 
}
