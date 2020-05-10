/*
    4.
    The Benevolent Order of Programmers maintains a collection of bottled port. 
    To describe it, the BOP Portmaster has devised a Port class.

    The Portmaster completed the method definitions 
    for the Port class and then derived the VintagePort 
    class as follows before being relieved of his position 
    for accidentally routing a bottle of ‘45 Cockburn to someone 
    preparing an experimental barbecue sauce.

    You get the job of completing the VintagePort work.

    a. Your first task is to re-create the Port method definitions because the former Portmaster immolated his upon being relieved.
    b. Your second task is to explain why certain methods are redefined and others are not.
    c. Your third task is to explain why operator=() and operator<<() are not virtual.
    d. Your fourth task is to provide definitions for the VintagePort methods.
*/

#include "Exercise_04_port.h"
#include <iostream>
using namespace std;

int main(){
    Port port("test port", "style1", 10);
    port.Show();
    cout << port << endl;

    VintagePort vp;
    Port& test = vp;
    vp.Show();
    cout << vp << endl;

    VintagePort vp1("vp", 1, "vpnn", 10);
    vp1.Show();
    return 0;
}