#include <iostream>
using std::cout;
#include "Exercise_05_stonewt.h"

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

Stonewt& Stonewt::operator+(const Stonewt& s2){
    this->stone += s2.stone;
    double lb = this->pounds + s2.pounds;
    int extraStone = (lb / Lbs_per_stn);
    this->stone += extraStone;
    double pds_left = int (lb) % Lbs_per_stn + lb - int(lb);
    this->pounds = pds_left;
    return *this;
}

Stonewt& Stonewt::operator-(const Stonewt& s2){
    double p2 = s2.stone * Lbs_per_stn + s2.pds_left;
    double p1 = this->stone * Lbs_per_stn + this->pds_left;
    double res = p1 - p2;
    this->stone = res/Lbs_per_stn;
    this->pds_left = int(res) % Lbs_per_stn + res - int(res);
    return *this;
}

Stonewt& Stonewt::operator*(const Stonewt& s2){
    double p2 = s2.stone * Lbs_per_stn + s2.pds_left;
    double p1 = this->stone * Lbs_per_stn + this->pds_left;
    double res = p1 * p2;
    this->stone = res/Lbs_per_stn;
    this->pds_left = int(res) % Lbs_per_stn + res - int(res);
    return *this;
}

std::ostream& operator<<(std::ostream& o, const Stonewt& s){
    o << s.stone << " " << s.pds_left << std::endl;
    return o;
}