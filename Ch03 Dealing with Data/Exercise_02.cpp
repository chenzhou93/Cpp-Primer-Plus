/*
    2. 
    Write a short program that asks for your height 
    in feet and inches and your weight in pounds. 
    (Use three variables to store the information.) 
    Have the program report your body mass index (BMI). 

    To calculate the BMI, 
    first convert your height in feet and inches to your height in inches 
    (1 foot = 12 inches). 
    Then convert your height in inches to your height in meters by multiplying by 0.0254. 
    Then convert your weight in pounds into your mass in kilograms by dividing by 2.2. 
    Finally, compute your BMI by dividing your mass in kilograms 
    by the square of your height in meters. 
    Use symbolic constants to represent the various conversion factors.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    unsigned int feet = 0;
    unsigned int inches = 0;
    unsigned int pounds = 0;
    const double inchToMeter = 0.0254;
    const double poundToKg = 2.2;
    double height = 0.0;
    double weight = 0.0;
    double BMI = 0.0;

    cout << "Input your height and weight " << endl;
    cin >> feet >> inches >> pounds;

    height = (double)(feet * 12 + inches) * inchToMeter;
    weight = (double)pounds / poundToKg;
    cout << height << " " << weight << endl;
    BMI = weight / (height * height);

    cout << "Your BMI is: " << BMI << endl;

    return 0;
}