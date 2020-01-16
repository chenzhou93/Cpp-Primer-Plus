/*
    2. Write a C++ program that asks for a distance in furlongs 
        and converts it to yards. (One furlong is 220 yards.)
*/
#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter a distance in furlongs: ";
    double furlongs;
    cin >> furlongs;
    double yards;
    //write down your logic below
    yards = 220 * furlongs;
   
    cout << furlongs << " furlongs = "
         << yards << " feet\n";

    return 0;
}