#include "Exercise_01_golf.h"
#include <iostream>

void setgolf(golf & g, const char * name, int hc){
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g){
    std::cout << "please input the name: " << std::endl;
    std::cin.getline(g.fullname, sizeof(g.fullname));
    std::cout << "please input the handicap: " << std::endl;
    std::cin >> g.handicap;
    int result = 0;
    if(strlen(g.fullname) == 0){
        result = 1;
    }else{
        result = 0;
    }
    return result;
}

void handicap(golf & g, int hc){
    g.handicap = hc;
}

void showgolf(const golf & g){
    std::cout << g.fullname << std::endl;
    std::cout << g.handicap << std::endl;
}