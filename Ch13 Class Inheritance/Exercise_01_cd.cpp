#include "Exercise_01_cd.h"
#include <iostream>
#include <cstring>
using namespace std;

Cd::Cd(const char * s1, const char * s2, int n, double x){
    strncpy(performers,s1, 49);
    performers[49] = '\0';
    strncpy(label, s2, 19);
    label[19] = '\0';
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d){
    strncpy(performers,d.performers, 49);
    performers[49] = '\0';
    strncpy(label, d.label, 19);
    label[19] = '\0';
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd(){
    performers[0] = '\0';
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
    int n1 = strlen(d.performers);
    int n2 = strlen(d.label);
    strncpy(performers, d.performers, 49);
    performers[49] = '\0';
    strncpy(label, d.label, 19);
    label[19] = '\0';
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic() : Cd(){
    primaryWork[0] = '\0';
}

Classic::Classic(const char* work, const char * s1, const char * s2, int n, double x): Cd(s1, s2, n, x){
    strncpy(primaryWork, work, 99);
    primaryWork[99] = '\0';
}

void Classic::Report() const{
    Cd::Report();
    cout << "primaryWork: " << primaryWork << endl;
}

Classic & Classic::operator=(const Classic & d){
    if(this == &d){
        return *this;
    }
    Cd::operator=(d);
    int n = strlen(d.primaryWork);
    strcpy(primaryWork, d.primaryWork);
    return *this;
}

