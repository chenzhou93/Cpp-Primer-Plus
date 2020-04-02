/**
 * 6. 
 * Write a template function maxn() that 
 * takes as its arguments an array of items of type T 
 * and an integer representing the number of elements 
 * in the array and that returns the largest item in the array. 
 * 
 * Test it in a program that uses the function 
 * template with an array of six int value 
 * and an array of four double values. 
 * 
 * The program should also include a specialization 
 * that takes an array of pointers-to-char 
 * as an argument 
 * and the number of pointers as a second argument 
 * and that returns the address of the longest string. 
 * 
 * If multiple strings are tied for having the longest length, 
 * the function should return the address of the first one tied for longest. 
 * Test the specialization with an array of five string pointers.
 * 
 * 
*/
#include <iostream>   
using namespace std;

template<typename T>
T maxn(T arr[], int n){
    int i = 0;
    T max = arr[i];
    for(i=1; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

template<> const char* maxn(const char* s[], int n)
{
    const char* sp = s[0];
    int max = 0;
    for(int i=1; i<n; i++){
        if(max < strlen(s[i])){
            strcmp(sp, s[i]);
            max = strlen(s[i]);
        }
    }
    return sp;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    double dbl[5] = {6.1, 7.1, 8.1, 9.1};
    cout << maxn(arr, 5) << endl;
    cout << maxn(dbl, 4) << endl;

    const char* sarr[] = {"hello", "hi", "howareyou", "good"};
    cout << maxn(sarr, 4) << endl;
    return 0;
}





