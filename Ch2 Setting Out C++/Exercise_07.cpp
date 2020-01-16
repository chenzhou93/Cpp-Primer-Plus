/*
    7. Write a program that asks the user to enter an hour value and a minute value. The main() function should then pass these two values to a type void function that displays the two values in the format shown in the following sample run:

    Enter the number of hours: 9
    Enter the number of minutes: 28
    Time: 9:28
*/
#include <iostream>
void showtime(int, int);     // function prototype
int main()
{
    using namespace std;
   
    cout << "Enter the number of hours: ";
    int hours; 
    cin >> hours;
    cout << "Enter the number of minutes: ";
    int minutes; 
    cin >> minutes;
    showtime(hours, minutes);
   //cin.get();
   //cin.get();
    return 0;
}

void showtime(int hrs, int mins)
{
    using namespace std;
    //write down the code to print the time
    cout << "Time: " << hrs << ":" << mins << endl;
}
