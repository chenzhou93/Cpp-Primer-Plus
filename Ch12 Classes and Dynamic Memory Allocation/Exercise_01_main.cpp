/*
    1. 
    Consider the following class declaration:

    class Cow {
        har name[20];
        char * hobby;
        double weight;
    public:
        Cow();
        Cow(const char * nm, const char * ho, double wt);
        Cow(const Cow c&);
        ~Cow();
        Cow & operator=(const Cow & c);
        void ShowCow() const;  // display all cow data
    };

    Provide the implementation for this class and write a short program that uses all the member functions.
*/

#include <iostream>
#include "Exercise_01_cow.h"

int main(){
    Cow cow1;
    Cow cow2("cow2", "drink", 99.99);
    cow1.ShowCow();
    cow2.ShowCow();

    cow1 = cow2;
    cow1.ShowCow();

    Cow cow3 = cow2;
    cow3.ShowCow();

    return 0;
}