/**
 * 5. 
 * Write a template function max5() 
 * that takes as its argument an array of five items of type T 
 * and returns the largest item in the array. 
 * 
 * (Because the size is fixed, it can be hard-coded into the loop 
 * instead of being passed as an argument.) 
 * 
 * Test it in a program that uses the function 
 * with an array of five int value 
 * and an array of five double values.
 * 
 * 
*/
#include <iostream>   
using namespace std;

template<typename T>
T max5(T arr[]){
    int i = 0;
    T max = arr[i];
    for(i=1; i<5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    double dbl[5] = {6.1, 7.1, 8.1, 9.1, 10.1};
    cout << max5(arr) << endl;
    cout << max5(dbl) << endl;
    return 0;
}



