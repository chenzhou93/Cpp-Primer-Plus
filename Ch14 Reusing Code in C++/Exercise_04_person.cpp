#include "Exercise_04_person.h"
#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h> 
using namespace std;

void Person::Data(){
    cout << "first name: " << firstName << endl;
    cout << "last name: " << lastName << endl;
}

void Gunslinger::Show(){
    Person::Data();
    cout << "Draw Time: " << drawTime << endl;
    cout << "Number of nothes: " << nothesNum << endl;
}

double PokerPlayer::Draw(){
    srand (time(0));
    double res = rand() % 52 + 1;
    return res;
}

void PokerPlayer::Show(){
    Person::Data();
}

double BadDude::Gdraw(){
    return Gunslinger::Draw();
}

double BadDude::Cdraw(){
    return PokerPlayer::Draw();
}

void BadDude::Show(){
    Gunslinger::Show();
}