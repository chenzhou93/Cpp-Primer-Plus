#include "Exercise_03_dma.h"
#include <cstring>
#include <iostream>
using namespace std;

ABC::ABC(const char * l , int r){
    int n = strlen(l);
    label = new char[n+1];
    strcpy(label, l);
    rating = r;
}

ABC::ABC(const ABC& abc){
    int n = strlen(abc.label);
    label = new char[n+1];
    strcpy(label, abc.label);
    rating = abc.rating;
}

ABC::~ABC(){
    if(label){
        delete[] label;
    }
}

void ABC::View() const{
    cout << "label: " << label << endl;
    cout << "rating: " << rating << endl;
}

// baseDMA methods
baseDMA::baseDMA(const ABC & rs) : ABC(rs)
{
    
}

baseDMA::~baseDMA()
{
    //delete [] label;
}

baseDMA & baseDMA::operator=(const baseDMA & rs)
{
    if (this == &rs)
        return *this;
    delete [] label;
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

void baseDMA::View() const{
    ABC::View();
}

// lacksDMA methods
lacksDMA::lacksDMA(const char * c, const char * l, int r)
    : ABC(l, r)
{
    std::strncpy(color, c, 39);
    color[39] = '\0';
}

lacksDMA::lacksDMA(const char * c, const ABC & rs) : ABC(rs)
{
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

void lacksDMA::View() const{
    ABC::View();
    cout << "color: " << color << endl;
}

// hasDMA methods
hasDMA::hasDMA(const char * s, const char * l, int r)
         : ABC(l, r)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const char * s, const ABC & rs)
         : ABC(rs)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs)
         : ABC(hs)  // invoke base class copy constructor
{
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
    delete [] style;
}

void hasDMA::View() const{
    ABC::View();
    cout << "style: " << style << endl;
}


hasDMA & hasDMA::operator=(const hasDMA & hs)
{
    if (this == &hs)
        return *this;
    ABC::operator=(hs);  // copy base portion
    delete [] style;         // prepare for new style
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
    return *this;
}
