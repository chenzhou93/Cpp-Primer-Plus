/*
    3.Write a program that asks the user to enter his or her first name and then last name, 
    and that then constructs, 
    stores, and displays a third string, 
    consisting of the user’s last name followed by a comma, a space, 
    and first name. Use char arrays and functions from the cstring header file. 
    A sample run could look like this:

    Enter your first name: Flip
    Enter your last name: Fleming
    Here's the information in a single string: Fleming, Flip
*/

#include <iostream>
using namespace std;

int main(){
    char firstName[20];
    char lastName[20];
    cout << "Enter your first name: ";
    cin.get(firstName,20);
    cin.get();

    cout << "Enter your last name: ";
    cin.getline(lastName,20);
    
    cout << "Here's the information in a single string: "
        << lastName << ", " << firstName << endl;
    return 0;
}