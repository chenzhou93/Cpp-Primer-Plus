/*
    3. Write a C++ program that uses three user-defined 
        functions (counting main() as one) and produces the following output:

    Three blind mice
    Three blind mice
    See how they run
    See how they run

    One function, called two times, 
    should produce the first two lines, and the remaining function, 
    also called twice, should produce the remaining output.
*/
#include <iostream>
using namespace std;

void mice();
void run();
int main()
{
    //write down your code below to call the user defined functions
    mice();
    mice();
    run();
    run();

   //cin.get();
   return 0;
}

void mice()
{
   cout << "Three blind mice\n";
}

void run()
{
   cout << "See how they run\n";
}