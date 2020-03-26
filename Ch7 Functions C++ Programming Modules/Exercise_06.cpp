/**
 * 6.
 * 
 * Write a program that uses the following functions:
 * 
 * Fill_array() takes as arguments the name of an array of double values 
 * and an array size. 
 * It prompts the user to enter double values to be entered in the array. 
 * It ceases taking input when the array is full 
 * or when the user enters non-numeric input, and it returns the actual number of entries.
 * 
 * Show_array() takes as arguments the name of an array of double values 
 * and an array size and displays the contents of the array.
 * 
 * 
 * Reverse_array() takes as arguments the name of an array of 
 * double values and an array size and reverses 
 * the order of the values stored in the array.
 * 
 * The program should use these functions to fill an array, 
 * show the array, reverse the array, show the array, 
 * reverse all but the first and last elements of the array, and then show the array.
 * 
*/

#include <iostream>
#include <cctype>
using namespace std;

int fillArray(double[], int);
void showArray(double[], int);
void reverseArray(double[], int);

int main(){
    double arr[10];
    int num = fillArray(arr, 10);
    cout << "num:" << num << endl;
    showArray(arr, num);
    reverseArray(arr, num);
    showArray(arr, num);
    return 0;
}

int fillArray(double arr[], int n){
    int num = 0;
    for(int i=0; i<n; ++i){
        if(cin >> arr[i]){
            num++;
        }
        //num++;
    }
    return num;
}

void showArray(double arr[], int n){
    for(int i=0; i<n; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(double arr[], int n){
    for(int i=1, j=n-2; i < j; i++, j--){
        double tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}

