/*
    10.
    Write a program using nested loops 
    that asks the user to enter a value for the number of rows to display. 
    
    It should then display that many rows of asterisks, 
    with one asterisk in the first row, two in the second row, and so on. 
    
    For each row, the asterisks are preceded by the number of periods 
    needed to make all the rows display a total number of characters 
    equal to the number of rows. A sample run would look like this:

    Enter number of rows: 5
    ....*
    ...**
    ..***
    .****
    *****
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n = 0;
    cout << "Enter number of rows: ";
    cin >> n;

    for(int i=0; i<n; ++i){
        for(int j=n-2-i; j>=0; j--){
            cout << '.';
        }
        for(int k=n-1; k>=n-1-i; k--){
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}