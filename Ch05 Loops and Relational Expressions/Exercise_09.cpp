/*
    9.
    Write a program that matches the description of 
    the program in Programming Exercise 8, 
    but use a string class object instead of an array. 
    
    Include the string header file and use a relational operator 
    to make the comparison test.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = 0;
    while(s != "done"){
        cnt++;
        cin >> s;
    }
     cout << "Total " << cnt << " words." << endl;
    return 0;
}