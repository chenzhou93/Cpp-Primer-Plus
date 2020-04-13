#include "Exercise_01_bank.h"
#include <iostream>
#include <string>

Bank::Bank(){
    name = "test";
    accountNumber = "000";
    balance = 0.00;
}

Bank::Bank(std::string n, std::string a="000", double b=0.00){
    name = n;
    accountNumber = a;
    balance = b;
}

void Bank::show(){
    std::cout << "name: " << name << std::endl;
    std::cout << "acct number: " << accountNumber << std::endl;
    std::cout << "balance: " << balance << std::endl;
}

void Bank::deposit(double amount){
    balance += amount;
}

void Bank::withDraw(double amount){
    double result = 0.0;
    if(amount <= balance){
        balance -= amount;
        result = balance;
    }else{
        std::cout << "not sufficient balance!" << std::endl;
        result = 0;
    }
    std::cout << "you still have " << result << " dollars." << std::endl;
}