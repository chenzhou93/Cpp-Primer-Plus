/**
 * 6.
 * Put together a program that keeps track of 
 * monetary contributions to the Society 
 * for the Preservation of Rightful Influence. 
 * 
 * It should ask the user to enter the number of contributors 
 * and then solicit the user to enter the name 
 * and contribution of each contributor. 
 * 
 * The information should be stored in a dynamically 
 * allocated array of structures. 
 * 
 * Each structure should have two members: 
 * a character array (or else a string object) 
 * to store the name 
 * and a double member to hold the amount of the contribution. 
 * 
 * After reading all the data, 
 * the program should display
 * the names and amounts donated for all donors 
 * who contributed $10,000 or more. 
 * 
 * This list should be headed by the label Grand Patrons. 
 * After that, the program should list the remaining donors. 
 * 
 * That list should be headed Patrons. 
 * If there are no donors in one of the categories, 
 * the program should print the word “none.”
 * Aside from displaying two categories, the program need do no sorting.
 * 
 */

#include <iostream>
using namespace std;
struct Donor{
    char name[20];
    double amount;
};
int main(){
    int num = 0;
    int numOfGP = 0;
    cout << "input the number of donors:";
    cin >> num;
    cin.get();
    Donor* donors = new Donor[num];
    for(int i=0; i<num; ++i){
        cout << "Enter name for contributor " << i + 1 << ": ";
        cin.getline(donors[i].name, 20);
        cout << "Enter amount for contributor " << i + 1 << ": ";
        cin >> donors[i].amount;
        cin.get();
        if(donors[i].amount >= 10000){
            numOfGP++;
        }
    }
    cout << "Grand Patrons" << endl;
    if(numOfGP == 0){
        cout << "None." << endl;
    }else{
        for(int i=0; i<num; ++i){
            if(donors[i].amount >= 10000){
                cout << "Name: " << donors[i].name << " - Amount: " << donors[i].amount << endl;
            }
        }
    }
    cout << "Patrons" << endl;
    if(numOfGP == num){
        cout << "None." << endl;
    }else{
        for(int i=0; i<num; ++i){
            if(donors[i].amount < 10000){
                cout << "Name: " << donors[i].name << " - Amount: " << donors[i].amount << endl;
            }
        }
    }
    delete[] donors;
    return 0;
}
