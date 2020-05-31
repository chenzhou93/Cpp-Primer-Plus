/**
 * 8.
 * Write a program that opens a text file, 
 * reads it character-by-character to the end of the file, 
 * and reports the number of characters in the file.
 * 
 */

#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main(){    
    char ch;
    int count = 0;
    ifstream inFile;
    inFile.open("Test.txt");
    if(!inFile.is_open()){
        cout << "can't find the file!" << endl;
        exit(EXIT_FAILURE);
    }
    while(inFile >> ch){
        if(isalpha(ch)){
            count++;
        }
    }
    cout << "total is: " << count << endl;
    inFile.close();
    return 0;
}
