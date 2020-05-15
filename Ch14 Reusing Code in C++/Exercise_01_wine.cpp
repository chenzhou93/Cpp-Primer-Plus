#include "Exercise_01_wine.h"
#include <iostream>
using namespace std;

template<class T1, class T2>
T1 & Pair<T1,T2>::first()
{
    return a;
}
template<class T1, class T2>
T2 & Pair<T1,T2>::second()
{
    return b;
}

Wine::Wine(const char * l, int y, const int yr[], const int bot[]){
    name = l;
    year = y;
    years.resize(year);
    bottles.resize(year);
    for(int i=0; i<year; i++){
        years[i] = yr[i];
        bottles[i] = bot[i];
    }
    pairArray.first() = years;
    pairArray.second() = bottles;
}

Wine::Wine(const char * l, int y){
    name = l;
    year = y;
    years.resize(year);
    bottles.resize(year);
    pairArray.first() = years;
    pairArray.second() = bottles;
}

void Wine::GetBottles(){
    for(int i=0; i<year; i++){
        cout << "input the number of years: " << endl;
        cin >> years[i];
        cout << "input the number of bottles:" << endl;
        cin >> bottles[i];
    }
    pairArray.first() = years;
    pairArray.second() = bottles;
}

string& Wine::Label(){
    return name;
}

int Wine::sum(){
    int sum = 0;
    for(int i=0; i<year; i++){
        sum += bottles[i];
    }
    return sum;
}

void Wine::Show(){
    cout << "name: " << name << endl;
    cout << "year: " << year << endl;
    cout << "pairArray: " << endl;
    for(int i=0; i<year; i++){
        cout << "Years: "<< pairArray.first()[i] << endl;
        cout << "Bottles: "<< pairArray.second()[i] << endl;
    }
}