/*
    8.
    Do Programming Exercise 7 
    but use new to allocate a structure instead of declaring a structure variable.
    Also have the program request the pizza diameter 
    before it requests the pizza company name.
*/
#include <iostream>
using namespace std;
struct Pizza{
    char name[20];
    double diameter;
    double weight;
};
int main(){
    Pizza * sup = new Pizza;
    cout << "what's the diameter? ";
    cin >> sup->diameter;
    cin.get();
    cout << "what's the name? ";
    cin.getline(sup->name, 20);
    cout << "what's the weight? ";
    cin >> sup->weight;

    cout << sup->name << " " << sup->diameter << " " << sup->weight << endl;
    delete sup;
    return 0;
}