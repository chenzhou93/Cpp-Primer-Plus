/*
    3. 
    Write a program that asks the user to enter a 
    latitude in degrees, minutes, and seconds 
    and that then displays the latitude in decimal format. 
    There are 60 seconds of arc to a minute 
    and 60 minutes of arc to a degree; 
    represent these values with symbolic constants. 
    You should use a separate variable for each input value. 

    Enter a latitude in degrees, minutes, and seconds:
    First, enter the degrees: 37
    Next, enter the minutes of arc: 51
    Finally, enter the seconds of arc: 19
    37 degrees, 51 minutes, 19 seconds = 37.8553 degrees
*/

#include <iostream>
using namespace std;
int main(){
    int degrees = 0;
    int minutesOfArc = 0;
    int secondsOfArc = 0;
    double totalDegrees = 0.0;
    cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;

    cout << "Next, enter the minutes of arc: ";
    cin >> minutesOfArc;
    cout << "Finally, enter the seconds of arc: ";
    cin >> secondsOfArc;

    totalDegrees = (double)degrees + (double)minutesOfArc/60 + (double)secondsOfArc/3600;

    cout << degrees << " degrees, " << minutesOfArc << " minutes, "
        << secondsOfArc << " seconds = " << (double)totalDegrees << " degrees." << endl;;

    return 0;
}