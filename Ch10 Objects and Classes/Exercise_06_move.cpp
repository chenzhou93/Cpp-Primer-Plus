#include "Exercise_06_move.h"
#include <iostream>

Move::Move(double a, double b){
    x = a;
    y = b;
}

void Move::showmove() const{
    std::cout << x << std::endl;
    std::cout << y << std::endl;
}

Move Move::add(const Move & m) const{
    Move move(0,0);
    move.x = this->x + m.x;
    move.y = this->y + m.y;
    return move;
}

Move Move::reset(double a, double b){
    this->x = a;
    this->y = b;
    return *this;
}

