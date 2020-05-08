#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char arr[10];
    //char* ap = "hello";
    const char* ap = "hello";

    strncpy(arr, ap, 9);
    arr[9] = '\0';

    cout << arr << endl;

    return 0;
}