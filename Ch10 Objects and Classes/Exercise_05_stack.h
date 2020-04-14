// stack.h -- class definition for the stack ADT
#ifndef STACK_H_
#define STACK_H_

struct customer {
    char fullname[35];
    double payment;
};

//typedef customer Item;

class Stack
{
private:
    enum {MAX = 10};    // constant specific to class
    customer customers[MAX];    // holds stack items
    int top;            // index for top stack item
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    // push() returns false if stack already is full, true otherwise
    bool push(const customer & customers);   // add item to stack
    // pop() returns false if stack already is empty, true otherwise
    bool pop(customer & customers);          // pop top into item
};
#endif