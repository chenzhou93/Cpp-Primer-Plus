/*
    6. 
    The Bank of Heather would like to know 
    what would happen if it added a second ATM. 
    
    Modify the simulation in this chapter 
    so that it has two queues. 
    
    Assume that a customer 
    will join the first queue if it has fewer people in it
    than the second queue and that the customer 
    will join the second queue otherwise. 
    
    Again, find a value for number of customers 
    per hour that leads to an average wait time of one minute. (
    Note: This is a nonlinear problem in that doubling 
    the number of ATMs doesn’t double the number of customers 
    who can be handled per hour with a one-minute wait maximum.)
*/

#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
#include "Exercise_05_queue.h"
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
    cout << "Enter maximum size of queue 1: ";
    int qs;
    cin >> qs;
    Queue line1(qs);         // line queue holds up to qs people

    cout << "Enter maximum size of queue 2: ";
    int qs2;
    cin >> qs2;
    Queue line2(qs2);         // line queue holds up to qs people

    cout << "Enter the number of simulation hours: ";
    int hours;              //  hours of simulation
    cin >> hours;
    // simulation will run 1 cycle per minute
    long cyclelimit = MIN_PER_HR * hours; // # of cycles

    cout << "Enter the average number of customers per hour: ";
    double perhour;         //  average # of arrival per hour
    cin >> perhour;
    double min_per_cust;    //  average time between arrivals
    min_per_cust = MIN_PER_HR / perhour;

    Item temp;              //  new customer data
    long turnaways = 0;     //  turned away by full queue
    long customers = 0;     //  joined the queue
    long served = 0;        //  served during the simulation
    long sum_line = 0;      //  cumulative line length
    int wait_time = 0;      //  time until autoteller is free
    long line_wait = 0;     //  cumulative time in line

    Item temp2;              //  new customer data
    long turnaways2 = 0;     //  turned away by full queue
    long customers2 = 0;     //  joined the queue
    long served2 = 0;        //  served during the simulation
    long sum_line2 = 0;      //  cumulative line length
    int wait_time2 = 0;      //  time until autoteller is free
    long line_wait2 = 0;     //  cumulative time in line

// running the simulation
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer(min_per_cust))  // have newcomer 
		{
			if (line1.queuecount() <= line2.queuecount())
			{
				if (line1.isfull())
					turnaways++;
				else
				{
					customers++;
					temp.set(cycle);    // cycle = time of arrival 
					line1.enqueue(temp); // add newcomer to line 
				}
			}
			else
			{
				if (line2.isfull())
					turnaways++;
				else
				{
					customers2++;
					temp.set(cycle);    // cycle = time of arrival 
					line2.enqueue(temp); // add newcomer to line 
				}
			}
		}
        if (wait_time <= 0 && !line1.isempty())
        {
            line1.dequeue (temp);      // attend next customer
            wait_time = temp.ptime(); // for wait_time minutes
            line_wait += cycle - temp.when();
            served++;
        }

        if (wait_time2 <= 0 && !line2.isempty())
        {
            line2.dequeue (temp);      // attend next customer
            wait_time2 = temp.ptime(); // for wait_time minutes
            line_wait2 += cycle - temp.when();
            served2++;
        }

        if (wait_time > 0){
            wait_time--;
        }
        if (wait_time2 > 0){
            wait_time2--;
        }
            
        sum_line += line1.queuecount();
        sum_line2 += line2.queuecount();
    }

    while((line_wait + line_wait2) / (served + served2) > 1){
        Queue line(hours * perhour);
        perhour--;
        //Reset
        turnaways = 0; 
		customers = 0;
		served = 0;
		sum_line = 0;
		wait_time = 0;
		line_wait = 0;

        turnaways2 = 0; 
		customers2 = 0;
		served2 = 0;
		sum_line2 = 0;
		wait_time2 = 0;
		line_wait2 = 0;
        for (int cycle = 0; cycle < cyclelimit; cycle++)
        {
            if (newcustomer(min_per_cust))  // have newcomer
            {
                if (line.isfull())
                    turnaways++;
                else
                {
                    customers++;
                    temp.set(cycle);    // cycle = time of arrival
                    line.enqueue(temp); // add newcomer to line
                }
            }
            if (wait_time <= 0 && !line.isempty())
            {
                line.dequeue (temp);      // attend next customer
                wait_time = temp.ptime(); // for wait_time minutes
                line_wait += cycle - temp.when();
                served++;
            }

            if (wait_time > 0){
                wait_time--;
            }
            sum_line += line.queuecount();
        }
    }

// reporting results
    if (customers > 0)
    {
        cout << "customers accepted: " << customers + customers2 << endl;
        cout << "  customers served: " << served + served2 << endl;
        cout << "         turnaways: " << turnaways + turnaways2 << endl;
        cout << "average queue size: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout << (double) (sum_line+sum_line2) / perhour  << endl;
        cout << " average wait time: "
             << (double) (line_wait+line_wait2) / (served+served2) << " minutes\n";
        cout << " customers number: "
             << perhour << " customers\n";
    }
    else
        cout << "No customers!\n";
    cout << "Done!\n";

    return 0;
}

//  x = average time, in minutes, between customers
//  return value is true if customer shows up this minute
bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1);
}