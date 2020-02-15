/*
    6.
    Write a program that asks how many miles you have driven 
    and how many gallons of gasoline you have used 
    and then reports the miles per gallon your car has gotten. 
    
    Or, if you prefer, the program can request distance in kilometers 
    and petrol in liters and then report the result European style, 
    in liters per 100 kilometers.
    
*/

#include <iostream>
using namespace std;
int main(){
    int miles = 0;
    int gallons = 0;
    double ratio = 0.0;

    cout << "How many miles: ";
    cin >> miles;

    cout << "How many gallons: ";
    cin >> gallons;

    ratio = (double) gallons/miles;

    cout << "You use " << ratio << " gallons per mile." << endl;
    
    return 0;
}