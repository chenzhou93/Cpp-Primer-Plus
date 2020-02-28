/*
    6.
    The CandyBar structure contains three members, 
    as described in Programming Exercise 5. 
    
    Write a program that creates an array of three CandyBar structures, 
    initializes them to values of your choice, 
    and then displays the contents of each structure.
*/
#include <iostream>
using namespace std;

struct CandyBar{
    char name[20];
    double weight;
    int cal;
};

int main(){
    CandyBar bars[3] = {
        {"A", 20.5, 200},
        {"B", 10.5, 100},
        {"C", 21.5, 300}
    };
    cout << bars[0].name << " " << bars[0].weight << " " << bars[0].cal << endl;
    cout << bars[1].name << " " << bars[1].weight << " " << bars[1].cal << endl;
    cout << bars[2].name << " " << bars[2].weight << " " << bars[2].cal << endl;
    return 0;
}