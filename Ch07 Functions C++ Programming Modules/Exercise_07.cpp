/**
 * 7.
 * 
 * Redo Listing 7.7, modifying the three array-handling functions 
 * to each use two pointer parameters to represent a range. 
 * 
 * The fill_array() function, instead of returning the actual number of items read, 
 * should return a pointer to the location after the last location filled; 
 * the other functions can use this pointer as the second argument 
 * to identify the end of the data.
 * 
 * 
*/

#include <iostream>
#include <cctype>
using namespace std;

double* fillArray(double* head, double* end);
void showArray(double* head, double* end);
void reverseArray(double* head, double* end);

int main(){
    double arr[10];
    double* pa = arr;
    double* num = fillArray(pa, pa+10);
    showArray(pa, num);
    reverseArray(pa, num);
    showArray(pa, num);
    return 0;
}

double* fillArray(double* head, double* end){
    double* tmpPtr;
    for(tmpPtr = head; tmpPtr != end; tmpPtr++){
        cin >> (*tmpPtr);
    }
    return tmpPtr;
}

void showArray(double* head, double* end){
    for(double* p = head; p != end; p++){
        cout << *p << " ";
    }
    cout << endl;
}

void reverseArray(double* head, double* end){
    double* ph;
    double* pe;
    for(ph = head+1, pe = end-2; ph < pe; ph++, pe--){
        double temp = *ph;
        *ph = *pe;
        *pe = temp;
    }
}

