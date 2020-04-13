/*
    1. 
    Provide method definitions for the class described 
    in Chapter Review Question 5 
    and write a short program that illustrates all the features.

*/

#include <iostream>
#include "Exercise_01_bank.h"

using namespace std;

int main(){
    Bank bank("test", "12234", 100.00);
    bank.show();
    bank.deposit(19.99);
    bank.show();
    bank.withDraw(10.99);
    bank.show();
    return 0;
}