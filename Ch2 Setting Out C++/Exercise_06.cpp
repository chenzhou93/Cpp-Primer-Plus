/*
    6. Write a program that has main() call a user-defined function that takes a distance in light years as an argument and then returns the distance in astronomical units. The program should request the light year value as input from the user and display the result, as shown in the following code:

    Enter the number of light years: 4.2
    4.2 light years = 265608 astronomical units.
*/
#include <iostream>

double ly_to_au(double);
int main()
{
    using namespace std;
    double light_years;
    double astr_units;
    cout << "Enter the number of light years: ";
    cin >> light_years;
    astr_units = ly_to_au(light_years);
    cout << light_years << " light years = ";
    cout << astr_units << " astronomical units.\n";
   //cin.get();
   //cin.get();
    return 0;
}
double ly_to_au(double ly)
{
   //write down your code to return the correct value 
    double astr = 63240 * ly;
    return astr;
}

