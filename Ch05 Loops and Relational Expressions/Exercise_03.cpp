/*
    3.
    Write a program that asks the user to type in numbers. 
    After each entry, the program should report 
    the cumulative sum of the entries to date. 
    
    The program should terminate when the user enters 0.
*/
#include <iostream>
using namespace std;
int main()
{
    int input = 0;
    int sum = 0;
    cin >> input;
    while(input != 0){
        sum += input;
        cout << "Sum is: " << sum << endl;
        cin >> input;
    }
    return 0;
}