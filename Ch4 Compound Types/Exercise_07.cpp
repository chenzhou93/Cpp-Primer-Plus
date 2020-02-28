/*
    7. 
    William Wingate runs a pizza-analysis service. 
    For each pizza, he needs to record the following information:

    • The name of the pizza company, which can consist of more than one word
    • The diameter of the pizza
    • The weight of the pizza

    Devise a structure that can hold this information 
    and write a program that uses a structure variable of that type. 
    The program should ask the user to enter each of the preceding items of information, 
    and then the program should display that information. 
    Use cin (or its methods) and cout.

*/
#include <iostream>
using namespace std;
struct Pizza{
    char name[20];
    double diameter;
    double weight;
};
int main(){
    Pizza sup;
    cout << "what's the name? ";
    cin.getline(sup.name, 20);
    cout << "what's the diameter? ";
    cin >> sup.diameter;
    cout << "what's the weight? ";
    cin >> sup.weight;

    cout << sup.name << " " << sup.diameter << " " << sup.weight << endl;
    return 0;
}