/**
 * 2.
 * Write a program that reads up to 10 donation values into an array of double. 
 * (Or, if you prefer, use an array template object.) 
 * The program should terminate input on non-numeric input. 
 * 
 * It should report the average of the numbers 
 * and also report how many numbers in the array 
 * are larger than the average.
 * 
 * -- Listing 6.14
 * 
 */

#include <iostream>
using namespace std;

int main(){
    const int SIZE = 10;
    double arr[10];
    double avg = 0.000;
    int total = 0.00;
    int overAvg = 0;

    for(int i=0; i<SIZE; ++i){
        while(!(cin >> arr[i])){
            cin.clear();
            while(cin.get() != '\n'){
                continue;
            }
            cout << "Input a numeber:";
        }
        total += arr[i];
    }

    avg = (double)total/10;

    for(int j=0; j<10; ++j){
        if(arr[j] >= avg){
            overAvg++;
        }
    }

    cout << "average: " << (double)avg << endl;
    cout << "over average: " << overAvg << endl;

    return 0;
}
