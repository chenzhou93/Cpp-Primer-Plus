/*
    1. 
    Modify Listing 11.15 so that it writes the successive locations of 
    the random walker into a file. 
    Label each position with the step number. 
    Also have the program write the initial conditions 
    (target distance and step size) and the summarized results to the file. 
    The file contents might look like this:

    Target Distance: 100, Step Size: 20
    0: (x,y) = (0, 0)
    1: (x,y) = (-11.4715, 16.383)
    2: (x,y) = (-8.68807, -3.42232)
    ...
    26: (x,y) = (42.2919, -78.2594)
    27: (x,y) = (58.6749, -89.7309)
    After 27 steps, the subject has the following location:
    (x,y) = (58.6749, -89.7309)
    or
    (m,a) = (107.212, -56.8194)
*/

#include "Exercise_01_vector.h"
#include <iostream>
#include <fstream>
#include <cstdlib>// rand(), srand() prototypes
#include <ctime>// time() prototype

int main(){
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;

    ofstream myfile;
    myfile.open ("Exercise_01_text.txt");
    myfile << "Writing this to a file.\n";
    
    
    cout << "Enter target distance (q to quit): ";
    cin >> target;
    
    cout << "Enter step length: ";
    cin >> dstep;
    myfile << "Target Distance: " << target << ", Step Size: " << dstep << endl;
    int count = 0;
    while (result.magval() < target){
        direction = rand() % 360;
        step.reset(dstep, direction, Vector::POL);
        result = result + step;
        myfile << count << ": (x,y) = "<< result << endl;
        steps++;
        count++;
    }
    myfile << "After " << steps << " steps, the subject "
        "has the following location:\n";
    myfile << result << endl;
    result.polar_mode();
    myfile << " or\n" << result << endl;
    myfile << "Average outward distance per step = "
        << result.magval()/steps << endl;
    steps = 0;
    result.reset(0.0, 0.0);
    cout << "Enter target distance (q to quit): ";
    
    cout << "Bye!\n";
    myfile.close();
    cin.clear();
    while (cin.get() != '\n'){
        continue;
    }
        
    return 0;
}