#include "Exercise_04_sales.h"
#include <iostream>
using namespace ncsales;

ncsales::Sales::Sales(){
    average = 0.0;
    max = 0.0;
    min = 0.0;
}

ncsales::Sales::Sales(const double ar[], int n){
    int num = (n < 4) ? n : 4;
    double sum = 0;
    double maxV = ar[0];
    double minV = ar[0];
    for(int i=1; i< num; i++){
        sales[i] = ar[i];
        sum += ar[i];
        if(ar[i] < minV){
            minV = ar[i];
        }
        if(ar[i] > maxV){
            maxV = ar[i];
        }
    }
    this->average = (double) sum/num;
    this->max = maxV;
    this->min = minV;
}

void ncsales::Sales::setSales(){
    int num = 0;
    double sum = 0;
    double maxV = 0.0;
    double minV = 99999.99;
    std::cout << "Imput a number: ";
    std::cin >> num;
    for(int i=0; i< num; i++){
        std::cin >> sales[i];
        sum += sales[i];
        if(sales[i] < minV){
            minV = sales[i];
        }
        if(sales[i] > maxV){
            maxV = sales[i];
        }
    }
    average = (double) sum/QUARTERS;
    max = maxV;
    min = minV;
}
void ncsales::Sales::showSales(){
    std::cout << average << std::endl;
    std::cout << max << std::endl;
    std::cout << min << std::endl;
}