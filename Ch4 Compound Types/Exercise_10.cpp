/*
    10.
    Write a program that requests 
    the user to enter three times for the 40-yd dash 
    (or 40-meter, if you prefer)
    and then displays the times and the average. 
    Use an array object to hold the data. 
    (Use a built-in array if array is not available.)
*/

#include <iostream>
using namespace std;

int main(){
    double arr[3];
    double sum = 0.00;
    for(int i=0; i<3; ++i){
        cin >> arr[i];
        cout << arr[i] << endl;
        sum += arr[i];
    }
    cout << "Average: " <<(double)sum/3 << endl;
    return 0;
}