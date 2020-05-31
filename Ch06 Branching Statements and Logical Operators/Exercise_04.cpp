/**
 * 4.
 * When you join the Benevolent Order of Programmers, 
 * you can be known at BOP meetings by your real name, 
 * your job title, or your secret BOP name. 
 * 
 * Write a program that can list members by real name, 
 * by job title, by secret name, or by a member’s preference. 
 * 
 * Base the program on the following structure:
 * 
 * // Benevolent Order of Programmers name structure
 *  struct bop {
 *      char fullname[strsize]; // real name
 *      char title[strsize];    // job title
 *      char bopname[strsize];  // secret BOP name
 *      int preference;         // 0 = fullname, 1 = title, 2 = bopname
 *  };
 * 
 * In the program, create a small array of such structures 
 * and initialize it to suitable values. 
 * Have the program run a loop that lets the user select from different alternatives:
 *  a. display by name     b. display by title
 *  c. display by bopname  d. display by preference
 *  q. quit
 * 
 * 
 * Note that “display by preference” does not mean display 
 * the preference member; 
 * it means display the member corresponding to the preference number. 
 * 
 * For instance, if preference is 1, choice d would display the programmer’s job title. 
 * A sample run may look something like the following:
 * 
 * 
 * Benevolent Order of Programmers Report
 * a. display by name     b. display by title
 * c. display by bopname  d. display by preference
 * q. quit
 * 
 * Enter your choice: a
 * Wimp Macho
 * Raki Rhodes
 * Celia Laiter
 * Hoppy Hipman
 * Pat Hand
 * Next choice: d
 * Wimp Macho
 * Junior Programmer
 * MIPS
 * Analyst Trainee
 * LOOPY
 * Next choice: q
 * Bye!
 * 
 * 
 */

#include <iostream>
#include <cstring>

using namespace std;
const int strSize = 20;
struct BOP{
    char fullName[strSize]; // real name
    char title[strSize];    // job title
    char bopName[strSize];  // secret BOP name
    int preference;         // 0 = fullname, 1 = title, 2 = bopname
};

int main(){
    BOP bopList[5];
    char ch;
    for(int i=0; i<5; ++i){
        strcpy(bopList[i].fullName, "Full Fool");
        strcpy(bopList[i].title, "Test Title");
        strcpy(bopList[i].bopName, "Nick Dick");
        if(i%2 == 0){
            bopList[i].preference = 1;
        }else{
            bopList[i].preference = 2;
        }
    }

    while(cin >> ch){
        if(ch == 'q'){
            cout << "Bye" << endl;
            break;
        }else{
            switch (ch)
            {
                case 'a':
                    for(int i=0; i<5; ++i){
                        cout << bopList[i].fullName << endl;
                    }
                break;
            case 'b':
                for(int i=0; i<5; ++i){
                    cout << bopList[i].title << endl;
                }
                break;
            case 'c':
                for(int i=0; i<5; ++i){
                    cout << bopList[i].bopName << endl;
                }
                break;
            case 'd':
                for(int i=0; i<5; i++){
                    if(bopList[i].preference == 1){
                        cout << bopList[i].fullName << endl;
                    }else if(bopList[i].preference == 2){
                        cout << bopList[i].title << endl;
                    }else{
                        cout << bopList[i].bopName << endl;
                    }
                }
                break;
                default: cout << "Illeagal Input!" << endl;
                break;
            }
        }
        
    }
    
    return 0;
}
