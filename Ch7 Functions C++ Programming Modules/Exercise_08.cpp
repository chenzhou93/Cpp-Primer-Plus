/**
 * 8.
 * 
 * Redo Listing 7.15 without using the array class. Do two versions:
 * 
 * a. Use an ordinary array of const char * for the strings representing the season names, 
 *      and use an ordinary array of double for the expenses.
 * 
 * 
 * b. Use an ordinary array of const char * for the strings representing the season names, 
 *      and use a structure whose sole member is an ordinary array of double for the expenses. 
 *      (This design is similar to the basic design of the array class.)
 * 
 * 
*/

#include <iostream>
#include <array>
#include <string>

using namespace std;
// constant data
const int Seasons = 4;
const char* Snames[] =
    {"Spring", "Summer", "Fall", "Winter"};

// function to modify array object
void fill(double expenses[]);
// function that uses array object without modifying it
void show(double expenses[]);

int main()
{
    double expenses[4];
    fill(expenses);
    show(expenses);
    return 0;
}

void fill(double expenses[])
{

    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> expenses[i];
    }
}

void show(double expenses[])
{
    
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << expenses[i] << endl;
        total += expenses[i];
    }
    cout << "Total Expenses: $" << total << endl;
}

