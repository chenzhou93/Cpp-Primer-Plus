/*
    3.
    Modify Listing 11.15 so that instead of reporting the 
    results of a single trial for a particular target/step combination, 
    it reports the highest, lowest, and average number of steps for N trials, 
    where N is an integer entered by the user.

*/

#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "Exercise_03_vector.h"
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
    int num = 0;
    int cnt = 0;
    int maxStep = 0;
    int minStep = 99999;
    double avgStep = 0.0;
    int totalStep = 0;
    cout << "Enter number of trials: ";
    (cin >> num).get();
    
    cout << "Enter target distance (q to quit): ";
    while (cin >> target && cnt < num)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        if(steps < minStep){
            minStep = steps;
        }
        if(steps > maxStep){
            maxStep = steps;
        }
        cout << "After " << steps << " steps, the subject "
            "has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        cout << "Average outward distance per step = "
            << result.magval()/steps << endl;
        
        totalStep += steps;
        steps = 0;
        result.reset(0.0, 0.0);
        cnt++;
        cout << "current count " << cnt << endl;
        cout << "Enter target distance (q to quit): ";
    }
    avgStep = (double)totalStep/cnt;
    cout << "min step is: " << minStep << endl;
    cout << "max step is: " << maxStep << endl;
    cout << "average step is: " << avgStep << endl;
    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}