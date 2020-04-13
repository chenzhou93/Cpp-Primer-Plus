/*
    
3.
    Do Programming Exercise 1 from Chapter 9 
    but replace the code shown there 
    with an appropriate golf class declaration. 
    
    Replace setgolf(golf &, const char*, int) 
    with a constructor with the appropriate argument
    for providing initial values. 
     
    Retain the interactive version of setgolf() 
    but implement it by using the constructor. 
    (For example, for the code for setgolf(), 
    obtain the data, pass the data to the constructor 
    to create a temporary object, 
    and assign the temporary object to the invoking object, which is *this.)

*/

#include <iostream>
#include "Exercise_03_golf1.h"

using namespace std;

int main(){
    Golf g("test1", 10);
    Golf gn;

    gn.setGolf();
    gn.showgolf();

    gn.setGolf();
    gn.showgolf();

    g.handicap(50);
    g.showgolf();

    return 0;
}