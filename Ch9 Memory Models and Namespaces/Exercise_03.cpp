/*
    3.
    Begin with the following structure declaration: 
    
    struct chaff
    {   
        char dross[20];
        int slag;
    };

    Write a program that uses placement new 
    to place an array of two such structures in a buffer. 
    
    Then assign values to the structure members 
    (remembering to use strcpy() for the char array) 
    and use a loop to display the contents. 
    
    Option 1 is to use a static array, 
    like that in Listing 9.10, for the buffer. 
    
    Option 2 is to use regular new to allocate the buffer.

*/

// newplace.cpp -- using placement new
#include <iostream>
#include <new>         // for placement new
#include <cstring>
using namespace std;

struct chaff{   
    char dross[20];
    int slag;
};

const int BUF = 512;
const int N = 2;
char buffer[BUF];      // chunk of memory

int main(){
    chaff *pd1, *pd2;
    int i;
    cout << "Calling new and placement new:\n";
    pd1 = new chaff[N];           // use heap
    pd2 = new (buffer) chaff[N];  // use buffer array
    for (i = 0; i < N; i++){
        strcpy(pd1[i].dross, "test1");
        pd1[i].slag = 10;
        strcpy(pd2[i].dross, "test2");
        pd2[i].slag = 10;
    }
        
    cout << "Memory addresses:\n" << "  heap: " << pd1
        << "  static: " << (void *) buffer  <<endl;
    cout << "Memory contents:\n";
    for (i = 0; i < N; i++){
        cout << pd1[i].dross << " at " << &pd1[i] << "; ";
        cout << pd2[i].dross << " at " << &pd2[i] << endl;
    }

    cout << "\nCalling new and placement new a second time:\n";
    chaff *pd3, *pd4;
    pd3= new chaff[N];            // find new address
    pd4 = new (buffer) chaff[N];  // overwrite old data
    for (i = 0; i < N; i++){
        strcpy(pd3[i].dross, "test3");
        pd3[i].slag = 10;
        strcpy(pd4[i].dross, "test4");
        pd4[i].slag = 10;
    }
        
    cout << "Memory contents:\n";
    for (i = 0; i < N; i++){
        cout << pd3[i].dross << " at " << &pd3[i] << "; ";
        cout << pd4[i].dross << " at " << &pd4[i] << endl;
    }

    cout << "\nCalling new and placement new a third time:\n";
    delete [] pd1;

    pd1= new chaff[N];
    pd2 = new (buffer + N * sizeof(chaff)) chaff[N];
    for (i = 0; i < N; i++){
        strcpy(pd1[i].dross, "test5");
        pd1[i].slag = 10;
        strcpy(pd2[i].dross, "test6");
        pd2[i].slag = 10;
    }
        
    cout << "Memory contents:\n";
    for (i = 0; i < N; i++){
        cout << pd1[i].dross << " at " << &pd1[i] << "; ";
        cout << pd2[i].dross << " at " << &pd2[i] << endl;
    }
    delete [] pd1;
    delete [] pd3;
    return 0;
}

