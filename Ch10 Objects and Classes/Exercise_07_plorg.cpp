#include <iostream>
#include <cstring>
#include "Exercise_07_plorg.h"

Plorg::Plorg(){
    strcpy(name, "Plorga");
    ci = 50;
}

void Plorg::setCI(int val){
    ci = val;
}

void Plorg::report(){
    std::cout << name << std::endl;
    std::cout << ci << std::endl;
}