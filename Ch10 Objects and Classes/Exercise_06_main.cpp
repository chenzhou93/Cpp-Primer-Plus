/*
    6.
    Create member function definitions and a program that exercises the class.
*/

#include <iostream>
#include "Exercise_06_move.h"

int main(){
    Move move(2,3);
    Move movea(3,4);
    move.showmove();
    std::cout << "---------" << std::endl;

    Move res = move.add(movea);
    res.showmove();

    move.reset(1,1);
    move.showmove();
    return 0;
}