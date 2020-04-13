#ifndef BANK_H__
#define BANK_H__

#include <string>

class Bank{
    private:
    std::string name;
    std::string accountNumber;
    double balance;

    public:
    Bank();
    Bank(std::string , std::string , double );
    void show();
    void deposit(double);
    void withDraw(double);
};
#endif