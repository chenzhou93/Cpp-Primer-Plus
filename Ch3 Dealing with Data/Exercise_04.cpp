/*
    4. 
    Write a program that asks the user to enter the number of seconds as an integer value 
    (use type long, or, if available, long long) 
    and that then displays the equivalent time 
    in days, hours, minutes, and seconds.

    Use symbolic constants to represent the number of hours in the day, 
    the number of minutes in an hour, and the number of seconds in a minute. 
    The output should look like this:

    Enter the number of seconds: 31600000
    31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
*/

#include <iostream>
using namespace std;
int main(){
    long numOfSecs;
    cout << "Enter the number of seconds: ";
    cin >> numOfSecs;

    int days = 0;
    int hours = 0;
    int minutes = 0;
    int seconds = 0;

    days = numOfSecs / (24 * 3600);
    numOfSecs = numOfSecs - (days * 24 * 3600);

    hours = numOfSecs / 3600;
    numOfSecs = numOfSecs - hours * 3600;

    minutes = numOfSecs / 60;
    numOfSecs = numOfSecs - minutes*60;

    seconds = numOfSecs;

    cout << numOfSecs << "seconds = " 
         << days << " days, "
        << hours << " hours, "
        << minutes << " minutes, "
        << seconds << " seconds."
        << endl;

    return 0;
}