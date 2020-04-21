#include <iostream>
using std::cout;
#include "Exercise_06_stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn;    // integer division
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn +lbs;
}

Stonewt::Stonewt()          // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt()         // destructor
{
}

// show weight in stones
void Stonewt::show_stn() const
{
    cout << stone << " stone, " << pds_left << " pounds\n";
}

// show weight in pounds
void Stonewt::show_lbs() const
{
    cout << pounds << " pounds\n";
}

Stonewt& Stonewt::operator=(const Stonewt& s){
    this->stone = s.stone; 
    this->pds_left = s.pds_left;
    return *this;
}

bool operator<(const Stonewt& s1, const Stonewt& s2){
    double lb1;
    double lb2;
    if(s1.stone > 0){
        lb1 = s1.stone * s1.Lbs_per_stn + s1.pds_left;
    }
    if(s2.stone > 0){
        lb2 = s2.stone * s2.Lbs_per_stn + s2.pds_left;
    }
    return lb1 < lb2;
}

bool operator>=(const Stonewt& s1, const Stonewt& s2){
    double lb1;
    double lb2;
    if(s1.stone > 0){
        lb1 = s1.stone * s1.Lbs_per_stn + s1.pds_left;
    }
    if(s2.stone > 0){
        lb2 = s2.stone * s2.Lbs_per_stn + s2.pds_left;
    }
    return lb1 >= lb2;
}