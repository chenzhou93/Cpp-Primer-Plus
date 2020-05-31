/**
 * 3.
 * 
 * Here is a structure declaration:
 *
 * struct box
 * {
 *      char maker[40];
 *      float height;
 *      float width;
 *      float length;
 *      float volume;
 * };
 *
 * a. Write a function that passes a box structure by value and that displays the value of each member.
 * b. Write a function that passes the address of a box structure 
 *    and that sets the volume member to the product of the other three dimensions.
 * c. Write a simple program that uses these two functions.
 * 
 * 
*/

#include <iostream>
using namespace std;
struct BOX
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void display(BOX box);
void calculate(BOX* box);

int main(){
    BOX box = {"China", 2.0, 2.0, 2.0, 8.0};
    display(box);
    calculate(&box);
    return 0;
}

void display(BOX box){
    cout << "maker: " << box.maker << endl;
    cout << "height: " << box.height << endl;
    cout << "width: " << box.width << endl;
    cout << "length: " << box.length << endl;
    cout << "volume: " << box.volume << endl;
}

void calculate(BOX* box){
    box->volume = box->height * box->width * box->length;
    cout << "Volume calculation: " << box->volume << endl;
}


