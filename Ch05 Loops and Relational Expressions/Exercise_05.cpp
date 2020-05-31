/*
    5.
    You sell the book C++ for Fools. 
    Write a program that has you enter a year’s worth of monthly sales 
    (in terms of number of books, not of money). 
    
    The program should use a loop to prompt you by month, 
    using an array of char * (or an array of string objects, if you prefer) 
    initialized to the month strings 
    and storing the input data in an array of int. 
    
    Then, the program should find the sum of the array contents 
    and report the total sales for the year.
*/
#include <iostream>
using namespace std;
int main()
{
    char* months = new char[12];
    int* sales = new int[12];
    int total = 0;

    for(int i=0; i<12; i++){
        cin >> months[i];
        cout << "Month is " << months[i] << ", input sales: " << endl;
        cin >> sales[i];
        total += sales[i];
    }

    cout << "Total sales: " << total << endl;

    delete[] months;
    delete[] sales;

    return 0;
}