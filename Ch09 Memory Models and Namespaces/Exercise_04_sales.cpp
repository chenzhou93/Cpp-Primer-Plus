#include "Exercise_04_sales.h"
#include <iostream>
using namespace ncsales;

void ncsales::setSales(Sales & s, const double ar[], int n){
    int num = (n < 4) ? n : 4;
    double sum = 0;
    double max = ar[0];
    double min = ar[0];
    for(int i=1; i< num; i++){
        s.sales[i] = ar[i];
        sum += ar[i];
        if(ar[i] < min){
            min = ar[i];
        }
        if(ar[i] > max){
            max = ar[i];
        }
    }
    s.average = (double) sum/num;
    s.max = max;
    s.min = min;
}

void ncsales::setSales(Sales & s){
    double sum = 0;
    double max = s.sales[0];
    double min = s.sales[0];
    for(int i=1; i< QUARTERS; i++){
        sum += s.sales[i];
        if(s.sales[i] < min){
            min = s.sales[i];
        }
        if(s.sales[i] > max){
            max = s.sales[i];
        }
    }
    s.average = (double) sum/QUARTERS;
    s.max = max;
    s.min = min;
}
void ncsales::showSales(const Sales & s){
    std::cout << s.average << std::endl;
    std::cout << s.max << std::endl;
    std::cout << s.min << std::endl;
}