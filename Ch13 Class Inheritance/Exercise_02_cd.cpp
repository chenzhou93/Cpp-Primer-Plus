#include "Exercise_02_cd.h"
#include <iostream>
#include <cstring>
using namespace std;

Cd::Cd(const char * s1, const char * s2, int n, double x){
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    performers = new char[n1+1];
    strcpy(performers, s1);
    label = new char[n2+1];
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d){
    int n1 = strlen(d.performers);
    int n2 = strlen(d.label);
    performers = new char[n1+1];
    strcpy(performers, d.performers);
    label = new char[n2+1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd(){
    performers = new char[50];
    performers[0] = '\0';
    label = new char[20];
    label[0] = '\0';
    selections = 0;
    playtime = 0.00;
}

void Cd::Report() const{
    cout << "performers: " << performers << endl;
    cout << "label: " << label << endl;
    cout << "selections: " << selections << endl;
    cout << "playtime: " << playtime << endl;
}

Cd & Cd::operator=(const Cd & d){
    if(this == &d){
        return *this;
    }
    delete[] performers;
    delete[] label;

    int n1 = strlen(d.performers);
    int n2 = strlen(d.label);
    performers = new char[n1+1];
    strcpy(performers, d.performers);
    label = new char[n2+1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Cd::~Cd(){
    if(performers){
        delete[] performers;
    }
    if(label){
        delete[] label;
    }
}

Classic::Classic() : Cd(){
    primaryWork = new char[100];
    primaryWork[0] = '\0';
}

Classic::Classic(const char* work, const char * s1, const char * s2, int n, double x): Cd(s1, s2, n, x){
    int size = strlen(work);
    primaryWork = new char[size+1];
    strcpy(primaryWork, work);
}

void Classic::Report() const{
    Cd::Report();
    cout << "primaryWork: " << primaryWork << endl;
}

Classic & Classic::operator=(const Classic & d){
    if(this == &d){
        return *this;
    }
    delete[] primaryWork;

    Cd::operator=(d);

    int n = strlen(d.primaryWork);
    primaryWork = new char[n+1];
    strcpy(primaryWork, d.primaryWork);
    return *this;
}

Classic::~Classic(){
    if(primaryWork){
        delete[] primaryWork;
    }
}

