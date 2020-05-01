// stock20.h -- augmented version
#ifndef STOCK20_H_
#define STOCK20_H_
#include <string>
#include <iostream>
using namespace std;

class Stock
{
private:
    char* company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    Stock();        // default constructor
    Stock(const char* co, long n = 0, double pr = 0.0);
    Stock(const Stock & s);
    ~Stock();       // do-nothing destructor
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    //void show()const;
    const Stock & topval(const Stock & s) const;
    //Stock& operator=(const Stock & s);
    friend ostream& operator<<(ostream& o, Stock& s);
    friend ostream& operator<<(ostream& o, const Stock* s);
};

#endif