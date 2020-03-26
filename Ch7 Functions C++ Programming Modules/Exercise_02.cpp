/**
 * 2.
 * 
 * Write a program that asks the user to enter up to 10 golf scores, 
 * which are to be stored in an array. 
 * 
 * You should provide a means for the user to 
 * terminate input prior to entering 10 scores. 
 * 
 * The program should display all the scores 
 * on one line and report the average score. 
 * 
 * Handle input, display, and the average calculation 
 * with three separate array-processing functions.
 * 
 * 
*/

#include <iostream>
using namespace std;

int inputArray(double arr[], int n);
void displayArray(double arr[], int n);
double calculateMean(double arr[], int n);

int main(){
    double arr[10];
    int num = inputArray(arr, 10);
    displayArray(arr, num);
    double resMean = calculateMean(arr, num);
    cout << "mean is: " << resMean << endl;
    return 0;
}

int inputArray(double arr[], int n){
    int num = 0;
    for(int i=0; i<n; ++i){
        cin >> arr[i];
        if(arr[i] == -1){
            break;
        }
        num++;
    }
    return num;
}
void displayArray(double arr[], int n){
    for(int i=0; i<n-1; ++i){
        cout << arr[i] << ", ";
    }
    cout << arr[n-1] << endl;
}
double calculateMean(double arr[], int n){
    double meanRes = 0.00;
    double sum = 0.00;
    for(int i=0; i<n; ++i){
        sum += arr[i];
    }
    meanRes = sum/n;
    return meanRes;
}
