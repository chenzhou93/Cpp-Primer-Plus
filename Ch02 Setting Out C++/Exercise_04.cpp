/*
    4. Write a program that asks the user to enter his or her age. The program then should display the age in months:

    Enter your age: 29

    Your age in months is 384.
*/
#include <iostream>
int main()
{
    using namespace std;
   
    cout << "Enter your age: ";
    int years; 
    cin >> years;
   //write down your code to print the months
   int months = 12 * years;
   cout << "Your age in months is " << months <<"."<< endl;
   //cin.get();
   //cin.get();
    return 0;
}
