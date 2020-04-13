#include "Exercise_03_golf1.h"
#include <iostream>
#include <cstring>

Golf::Golf(){
    strcpy(fullname, "null");
    this->hcap = 0;
}

Golf::Golf(const char * name, int hc){
    strcpy(fullname, name);
    this->hcap = hc;
}

void Golf::handicap(int hc){
    this->hcap = hc;
}

void Golf::setGolf(){
    std::cout << "please input the name: " << std::endl;
    std::cin.getline(fullname, sizeof(fullname));
    std::cout << "please input the handicap: " << std::endl;
    (std::cin >> this->hcap).get();

}

void Golf::showgolf(){
    std::cout << fullname << std::endl;
    std::cout << this->hcap << std::endl;
}