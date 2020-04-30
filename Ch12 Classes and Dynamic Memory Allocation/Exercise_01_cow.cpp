#include "Exercise_01_cow.h"
#include <iostream>
#include <cstring>

Cow::Cow(){
    strcpy(name, "cow");
    hobby = new char[1];
    hobby[0] = '\0';
    weight = 0.0;
}

Cow::Cow(const char * nm, const char * ho, double wt){
    strcpy(name, nm);
    hobby = new char[strlen(ho) + 1];
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow &c){
    int len = strlen(c.name);
    if(len <= strlen(name)){
        strcpy(name, c.name);
    }else{
       for(int i=0; i<strlen(name); i++){
           name[i] = c.name[i];
       } 
    }
    hobby = new char[len+1];
    strcpy(hobby, c.hobby);

    weight = c.weight;
}
Cow::~Cow(){
    delete[] hobby;
}

Cow & Cow::operator=(const Cow & c){
    if(this == &c){
        return *this;
    }
    delete[] hobby;
    int len = strlen(c.hobby);
    if(len <= strlen(name)){
        strcpy(name, c.name);
    }else{
       for(int i=0; i<strlen(name); i++){
           name[i] = c.name[i];
       } 
    }
    hobby = new char[len+1];
    strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}   
void Cow::ShowCow() const{// display all cow data
    std::cout << "name: " << name << std::endl;
    std::cout << "hobby: " << hobby << std::endl;
    std::cout << "weight: " << weight << std::endl;
}  