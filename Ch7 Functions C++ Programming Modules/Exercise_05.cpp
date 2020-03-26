/**
 * 5.
 * Define a recursive function that takes an integer argument 
 * and returns the factorial of that argument. 
 * 
 * Recall that 3 factorial, 
 * written 3!, equals 3 × 2!, 
 * and so on, with 0! defined as 1. 
 * 
 * In general, if n is greater than zero, 
 * n! = n * (n - 1)!. 
 * 
 * Test your function in a program 
 * that uses a loop to allow the user to enter various values 
 * for which the program reports the factorial.
 * 
 * 
 * 
*/

#include <iostream>
using namespace std;

long factoal(int n);

int main(){
    int num = 0;
    cout << "Imput a number:" << endl;
    cin >> num;
    long res = factoal(num);
    cout << "result: " << res << endl;
    return 0;
}

long factoal(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n * factoal(n-1);
}

