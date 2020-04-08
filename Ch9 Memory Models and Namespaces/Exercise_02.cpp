/*
    2.
    Redo Listing 9.9, replacing the character array with a string object. 
    The program should no longer have to check whether the input string fits, 
    and it can compare the input string to "" to check for an empty line.

*/

// static.cpp -- using a static local variable
#include <iostream>
#include <string>
using namespace std;
// constants
const int ArSize = 10;

// function prototype
void strcount(string str);

int main()
{
    string input;
    char next;

    cout << "Enter a line:\n";
    while (getline(cin, input) && input.size()>0)
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
    }
    cout << "Bye\n";
    return 0;
}

void strcount(string str)
{
    static int total = 0;        // static local variable
    int count = 0;               // automatic local variable

    cout << "\"" << str <<"\" contains ";
    for(int i=0; i<str.size(); i++){
        if(str[i] == ' '){
            continue;
        }
        count++;
    }
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}