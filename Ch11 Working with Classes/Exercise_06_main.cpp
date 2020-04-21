/*
    6.
    Rewrite the Stonewt class (Listings 11.16 and 11.17) 
    so that it overloads all six relational operators. 
    
    The operators should compare 
    the pounds members and return a type bool value. 
    
    Write a program that declares an array of six 
    Stonewt objects and initializes the first three objects in the array declaration. 
    
    Then it should use a loop 
    to read in values used to set the remaining three array elements. 
    
    Then it should report the smallest element, 
    the largest element, 
    and how many elements are greater or equal to 11 stone. 
    (The simplest approach is to create 
    a Stonewt object initialized to 11 stone 
    and to compare the other objects with that object.)
*/

#include <iostream>
using namespace std;
#include "Exercise_06_stonewt.h"
void display(const Stonewt & st, int n);
int main()
{
    
    Stonewt incognito = 275;// uses constructor to initialize
    Stonewt wolfe(285.7);    // same as Stonewt wolfe = 285.7;
    Stonewt taft(21, 8);
    Stonewt stList[5] = {incognito,wolfe,taft};
    
    for(int i=3; i<5; i++){
        int st;
        double lb;
        cin >> st >> lb;
        stList[i] = Stonewt(st, lb);
    }
    Stonewt sample(11, 0);
    Stonewt max(1, 0);
    Stonewt min(999, 0);
    int cnt = 0;
    for(int i=0; i<5; i++){
        if(stList[i] >= sample){
            cnt++;
        }
        if(stList[i] >= max){
            max = stList[i];
        }
        if(stList[i] < min){
            min = stList[i];
        }
    }

    max.show_stn();
    min.show_stn();
    cout << cnt << endl;
   
    return 0;
}

