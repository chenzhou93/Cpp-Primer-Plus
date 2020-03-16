/**
 * 1.
 * Write a program that reads keyboard input to 
 * the @ symbol and 
 * that echoes the input except for digits, 
 * converting each uppercase character to lowercase, 
 * and vice versa. (Don’t forget the cctype family.)
 * 
 * -- Listing 6.8
 */

#include <iostream>
#include <cctype>
using namespace std;

int main(){
    char ch;
    cin.get(ch);
    while(ch != '@'){

        if(isupper(ch)){
            ch = tolower(ch);
        }
        if(!isdigit(ch)){
            cout << ch;
        }
        cin.get(ch);
    }
    return 0;
}
