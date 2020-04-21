#ifndef COMPLEX_H__
#define COMPLEX_H__
#include <iostream>
class Complex{
    private:
    int real;
    int imagine;

    public:
    Complex();
    Complex(int r, int i);
    Complex operator~();
    Complex operator+(const Complex& c);
    Complex operator-(const Complex& c);
    Complex operator*(const Complex& c);
    friend Complex operator*(int n, Complex& c);
    friend std::istream& operator>>(std::istream& is, Complex& c);
    friend std::ostream& operator<<(std::ostream& os, const Complex& c);
};
#endif