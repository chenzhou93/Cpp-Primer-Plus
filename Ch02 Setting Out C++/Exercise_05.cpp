/*
    5. Write a program that has main() call a user-defined function that takes a Celsius temperature value as an argument and then returns the equivalent Fahrenheit value. The program should request the Celsius value as input from the user and display the result, as shown in the following code:

    Please enter a Celsius value: 20
    20 degrees Celsius is 68 degrees Fahrenheit.

    For reference, here is the formula for making the conversion:

    Fahrenheit = 1.8 × degrees Celsius + 32.0
*/
#include <iostream>

double C_to_F(double);
int main()
{
    using namespace std;
    cout << "Enter a temperature in Celsius: ";
    double C;
    cin >> C;
    double F;
    F = C_to_F(C);
    cout << C << " degrees Celsius = "
         << F << " degrees Fahrenheit\n";
   //cin.get();
   //cin.get();

   return 0;
}

//write a function C_to_F(double) below
double C_to_F(double temp)
{
   //write your logic to return the correct value
   double F = temp * 1.8 + 32.0;
   return F;
}
