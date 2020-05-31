/*
    1. Write a short program that asks for your height in integer 
    inches and then converts your height to feet and inches. 
    Have the program use the underscore character 
    to indicate where to type the response. 
    Also use a const symbolic constant to represent the conversion factor.
*/

#include <iostream>
using namespace std; 
int main(){
    unsigned int feet;
    double inches;
    unsigned int inchesToConvert;
    const int devidor = 12;
    cout << "Please input your height in inches: " << endl;
    cin >> inchesToConvert;
    if(inchesToConvert >= 0){
        inches = (double)inchesToConvert / devidor * 10;
        feet = inches / 10;
        inches = (int)inches % 10;
        cout << "You have " << feet << " feet and " << (int)inches << " inches." << endl;
    }
    return 0;
}

