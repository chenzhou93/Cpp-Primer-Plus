/*
    Write a C++ program that requests and displays information
     as shown in the following example of output:

    What is your first name? Betty Sue
    What is your last name? Yewe
    What letter grade do you deserve? B
    What is your age? 22
    Name: Yewe, Betty Sue
    Grade: C
    Age: 22

    Note that the program should be able to accept first names 
    that comprise more than one word. 
    Also note that the program adjusts the grade downward—that is, up one letter. 
    Assume that the user requests an A, a B, or a C 
    so that you don’t have to worry about the gap between a D and an F.
*/

#include <iostream>
using namespace std;

int main(){
    char firstName[20];
    cout << "What is your first name? ";
    cin.get(firstName,20);
    cin.get();

    char lastName[20];
    cout << "What is your Last name? ";
    cin.get(lastName,20);
    cin.get();

    char grade;
    cout << "What letter grade do you deserve? ";
    cin >> grade;

    int age;
    cout << "What's your age? ";
    cin >> age;

    cout << "Name: " << lastName << ", " << firstName << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;

    return 0;

}