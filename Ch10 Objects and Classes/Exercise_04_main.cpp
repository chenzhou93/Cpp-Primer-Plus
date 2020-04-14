/*
    4.
    Write a three-file program based on the following namespace:

    namespace SALES
    {
        const int QUARTERS = 4;
        struct Sales
        {
            double sales[QUARTERS];
            double average;
            double max;
            double min;
        };

        // copies the lesser of 4 or n items from the array ar
        // to the sales member of s and computes and stores the
        // average, maximum, and minimum values of the entered items;
        // remaining elements of sales, if any, set to 0
        void setSales(Sales & s, const double ar[], int n);
        // gathers sales for 4 quarters interactively, stores them
        // in the sales member of s and computes and stores the
        // average, maximum, and minimum values
        void setSales(Sales & s);
        // display all information in structure s
        void showSales(const Sales & s);
    }

    The first file should be a header file that contains the namespace. 
    The second file should be a source code file 
    that extends the namespace to provide definitions 
    for the three prototyped functions. 
    The third file should declare two Sales objects.
    It should use the interactive version of setSales() 
    to provide values for one structure and the non-interactive v
    ersion of setSales() to provide values for the second structure. 
    It should display the contents of both structures by using showSales().
*/

#include <iostream>
#include "Exercise_04_sales.h"
using namespace ncsales;
int main(){
    const double ar[4] = {5.5, 6.6, 7.7, 8.8};
    Sales s(ar, 4);
    Sales s1;
    s1.setSales();
    s1.showSales();
    std::cout << "- - - - - - - " << std::endl;
    s.showSales();
    return 0;
}