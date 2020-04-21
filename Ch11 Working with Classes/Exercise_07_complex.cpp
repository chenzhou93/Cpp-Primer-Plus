#include "Exercise_07_complex.h"
#include <iostream>
using namespace std;

Complex::Complex(){
    real = 0;
    imagine = 0;
}
Complex::Complex(int r, int i){
    real = r;
    imagine = i;
}

Complex Complex::operator~(){
    int tmp = real;
    real = imagine;
    imagine = tmp;
    return Complex(real, imagine);
}

Complex Complex::operator+(const Complex& c){
    int r, i;
    r = real + c.real;
    i = imagine + c.imagine;
    return Complex(r,i);
}
Complex Complex::operator-(const Complex& c){
    int r, i;
    r = real - c.real;
    i = imagine - c.imagine;
    return Complex(r,i);
}

Complex Complex::operator*(const Complex& c){
    int r, i;
    r = real * c.real;
    i = imagine * c.imagine;
    return Complex(r,i);
}

Complex operator*(int n, Complex& c){
    int r, i;
    r = n * c.real;
    i = n * c.imagine;
    return Complex(r,i);
}

istream& operator>>(istream& is, Complex& c){
    is >> c.real >> c.imagine;
    return is;
}

ostream& operator<<(ostream& os, const Complex& c){
    if(c.imagine > 0){  
        os << c.real << "+" <<  c.imagine << "i" << endl;
    }else{
        os << c.real <<  c.imagine << "i" << endl;
    }
    return os;
}