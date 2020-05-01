// stock20.cpp -- augmented version
#include <iostream>
#include <cstring>
#include "Exercise_03_stock.h"
using namespace std;

// constructors
Stock::Stock()        // default constructor
{   
    company = new char[20];
    strcpy(company, "no name");
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const char* co, long n, double pr){
    company = new char[20];
    strcpy(company, co);

    if (n < 0){
        std::cout << "Number of shares can't be negative; "
                   << company << " shares set to 0.\n";
        shares = 0;
    }else{
        shares = n;
    }
    share_val = pr;
    set_tot();
}

Stock::Stock(const Stock & s) 	// copy constructor
{
    using std::strlen;
    using std::strcpy;

    int len = strlen(s.company);
    company = new char[len + 1];
    strcpy(company, s.company);
    shares = s.shares;
    share_val = s.share_val;
    total_val = s.total_val;
}

// class destructor
Stock::~Stock()        // quiet class destructor
{
    if(company){
        delete[] company;
    }
}

// other methods
void Stock::buy(long num, double price)
{
     if (num < 0){
        std::cout << "Number of shares purchased can't be negative. "
             << "Transaction is aborted.\n";
    }else{
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0){
        cout << "Number of shares sold can't be negative. "
             << "Transaction is aborted.\n";
    }else if (num > shares){
        cout << "You can't sell more than you have! "
             << "Transaction is aborted.\n";
    }else{
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

// void Stock::show() const
// {
//     using std::cout;
//     using std::ios_base;
//     // set format to #.###
//     ios_base::fmtflags orig =
//         cout.setf(ios_base::fixed, ios_base::floatfield);
//     std::streamsize prec = cout.precision(3);

//     cout << "Company: " << company
//         << "  Shares: " << shares << '\n';
//     cout << "  Share Price: $" << share_val;
//     // set format to #.##
//     cout.precision(2);
//     cout << "  Total Worth: $" << total_val << '\n';

//     // restore original format
//     cout.setf(orig, ios_base::floatfield);
//     cout.precision(prec);
// }

const Stock & Stock::topval(const Stock & s) const
{
    if (s.total_val > total_val){
        return s;
    }   
    else{
        return *this;
    }
}

ostream& operator<<(ostream& o, Stock& s){
    // set format to #.###
    ios_base::fmtflags orig =
        o.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = o.precision(3);

    o << "Company: " << s.company
        << "  Shares: " << s.shares << '\n';
    o << "  Share Price: $" << s.share_val;
    // set format to #.##
    o.precision(2);
    o << "  Total Worth: $" << s.total_val << '\n';

    // restore original format
    o.setf(orig, ios_base::floatfield);
    o.precision(prec);
    return o;
}

Stock & Stock::operator=(const Stock & s)
{
    using std::strlen;
    using std::strcpy;

    if (this == &s)
        return *this;

    int len = strlen(s.company);
    delete [] company;
    company = new char[len + 1];
    strcpy(company, s.company);
    shares = s.shares;
    share_val = s.share_val;
    total_val = s.total_val;    
    return *this;
}

