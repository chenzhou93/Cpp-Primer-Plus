/**
 * 1.
 * 
 * Write a program that repeatedly asks the user 
 * to enter pairs of numbers until at least one of the pair is 0. 
 * 
 * For each pair, the program should use a function to 
 * calculate the harmonic mean of the numbers. 
 * The function should return the answer to main(), 
 * which should report the result. 
 * 
 * The harmonic mean of the numbers is the inverse of the average of 
 * the inverses and can be calculated as follows:
 *
 * harmonic mean = 2.0 × x × y / (x + y)
 * 
 * 
*/

#include <iostream>
using namespace std;

double calculateHarmonicMean(int x, int y);

int main(){
    int x = 0, y = 0;
    double res = 0.00;
    while(cin >> x >> y){
        if(x == 0 || y == 0){
            break;
        }
        res = calculateHarmonicMean(x, y);
        cout << "Mean is: " << res << endl;
    }
    return 0;
}

double calculateHarmonicMean(int x, int y){
    return (2.0 * x * y) /(x+y);
}