/*
    9.
    Do Programming Exercise 6, 
    but instead of declaring an array of three CandyBar structures, 
    use new to allocate the array dynamically.
*/

#include <iostream>
using namespace std;

struct CandyBar{
    char name[20];
    double weight;
    int cal;
};

int main(){
    CandyBar* bars = new CandyBar[3];
    strcpy(bars->name, "A");
    bars->weight = 20.5;
    bars->cal = 200;
    cout << bars->name << " " << bars->weight << " " << bars->cal << endl;
    bars++;
    
    strcpy(bars->name, "B");
    bars->weight = 10.5;
    bars->cal = 100;
    cout << bars->name << " " << bars->weight << " " << bars->cal << endl;
    bars++;
    
    strcpy(bars->name, "C");
    bars->weight = 21.5;
    bars->cal = 300;
    cout << bars->name << " " << bars->weight << " " << bars->cal << endl;
    
    return 0;
}