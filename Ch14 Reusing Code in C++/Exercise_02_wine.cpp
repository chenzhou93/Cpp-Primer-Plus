#include "Exercise_02_wine.h"
#include <iostream>
#include <string>
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

Wine::Wine(const char * l, int y, const int yr[], const int bot[]):
PairArray(ArrayInt(y), ArrayInt(y)), string(l){
    year = y;
    for(int i=0; i<y; i++){
        PairArray::first()[i] = yr[i];
        PairArray::second()[i] = bot[i];
    }
    
}

Wine::Wine(const char * l, int y):
PairArray(ArrayInt(y), ArrayInt(y)), string(l){
    year = y;
}

void Wine::GetBottles(){
    for(int i=0; i<year; i++){
        int years, bottles;
        cout << "input the number of years: " << endl;
        cin >> years;
        PairArray::first()[i] = years;
        cout << "input the number of bottles:" << endl;
        cin >> bottles;
        PairArray::second()[i] = bottles;
    }
}

string& Wine::Label(){
    return (string& ) (*this);
}

int Wine::sum(){
    int sum = 0;
    for(int i=0; i<year; i++){
        sum += PairArray::second()[i];
    }
    return sum;
}

void Wine::Show(){
    cout << "name: " << Label() << endl;
    cout << "year: " << year << endl;
    cout << "pairArray: " << endl;
    for(int i=0; i<year; i++){
        cout << "Years: "<< PairArray::first()[i] << endl;
        cout << "Bottles: "<< PairArray::second()[i] << endl;
    }
}