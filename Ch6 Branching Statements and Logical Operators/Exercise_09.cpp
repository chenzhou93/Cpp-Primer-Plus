/**
 * 9.
 * Do Programming Exercise 6 but modify it to get information from a file. 
 * 
 * The first item in the file should be the number of contributors, 
 * and the rest of the file should consist of pairs of lines, 
 * with the first line of each pair being a contributor’s name 
 * and the second line being a contribution. 
 * 
 * That is, the file should look like this:

 * 4
 * Sam Stone
 * 2000
 * Freida Flass
 * 100500
 * Tammy Tubbs
 * 5000
 * Rich Raptor
 * 55000
 * 
 */

#include <iostream>
#include <fstream>
using namespace std;
struct Donor{
    char name[20];
    double amount;
};
int main(){    
    int num = 0;
    int numOfGP = 0;
    ifstream inFile;
    inFile.open("TestExe10.txt");
    if(!inFile.is_open()){
        cout << "can't find the file!" << endl;
        exit(EXIT_FAILURE);
    }
    cout << "Read the number of donors:";
    inFile >> num;
    inFile.get();
    cout << "num " << num << endl;

    Donor* donors = new Donor[num];

    for(int i=0; i<num; ++i){
        cout << "read donors name " << donors[i].name << endl;
        inFile.getline(donors[i].name,20);
        cout << "read donors amount " << donors[i].amount << endl;
        inFile >> donors[i].amount;
        inFile.get();
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
