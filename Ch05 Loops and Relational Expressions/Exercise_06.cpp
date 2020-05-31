/*
    6.
    Do Programming Exercise 5 
    but use a two-dimensional array 
    to store input for 3 years of monthly sales.
    
     Report the total sales for each individual year and for the combined years.
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int total = 0;
    for(int i=0; i<2; i++){
        int yearTotal = 0;
        for(int j=0; j<12; ++j){
            int sale = 0;
            cin >> sale;
            yearTotal += sale;
            total += sale;
        }
        cout << yearTotal << endl;
    }
    cout << total << endl;

    return 0;
}