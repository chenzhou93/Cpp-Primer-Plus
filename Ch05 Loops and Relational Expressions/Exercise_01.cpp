/*
    1.
    Write a program that requests the user to enter two integers. 
    The program should then calculate and report 
    the sum of all the integers between and including the two integers. 
    
    At this point, assume that the smaller integer is entered first. 
    For example, if the user enters 2 and 9, 
    the program should report that the sum of all the integers from 2 through 9 is 44.
*/
#include <iostream>
using namespace std;

int main(){
    int num1 = 0, num2 = 0;
    cin >> num1 >> num2;
    int sum = 0;
    if(num1 < num2){
        for(int i=num1; i<=num2; ++i){
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}