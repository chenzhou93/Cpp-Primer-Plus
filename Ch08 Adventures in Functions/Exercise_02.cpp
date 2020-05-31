/**
 * 2.
 * The CandyBar structure contains three members. 
 * 
 * The first member holds the brand name of a candy bar. 
 * The second member holds the weight (which may have a fractional part) of the candy bar, 
 * and the third member holds the number of calories (an integer value) in the candy bar. 
 * 
 * Write a program that uses a function that takes as arguments a reference to CandyBar, 
 * a pointer-to-char, 
 * a double, 
 * and an int 
 * and uses the last three values to set the corresponding members of the structure. 
 * 
 * The last three arguments should have default values of 
 * “Millennium Munch,” 2.85, and 350. 
 * Also the program should use a function that takes a reference to a CandyBar as an argument and displays the contents of the structure. Use const where appropriate.
 * 
*/
#include <iostream>
using namespace std;

struct CandyBar{
    char brandName[50];
    double weight;
    int cal;
};

void setCandy(CandyBar& candybar, const char* s="Millennium Munch", double d =2.85, int c = 350);

int main(){
    CandyBar candybar1 = {"Test candy", 2.22, 200};
    CandyBar candybar2 = {};
    setCandy(candybar1, "candy1", 0.5, 111);
    setCandy(candybar2);

    cout << candybar1.brandName << endl;
    cout << candybar1.weight << endl;
    cout << candybar1.cal << endl;

    cout << candybar2.brandName << endl;
    cout << candybar2.weight << endl;
    cout << candybar2.cal << endl;
    return 0;
}

void setCandy(CandyBar& candybar, const char* s, double d, int c){
    strcpy(candybar.brandName, s);
    candybar.weight = d;
    candybar.cal = c;
}

