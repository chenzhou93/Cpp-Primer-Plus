// stack.cpp -- Stack member functions
#include "Exercise_05_stack.h"
Stack::Stack()    // create an empty stack
{
    top = 0;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push(const customer & customer)
{
    if (top < MAX)
    {
        customers[top++] = customer;
        return true;
    }
    else
        return false;
}

bool Stack::pop(customer & customer)
{
    if (top > 0)
    {
        customer = customers[--top];
        return true;
    }
    else
        return false;
}