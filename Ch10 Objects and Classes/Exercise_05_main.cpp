/*
    5.
    Consider the following structure declaration:

    struct customer {
        char fullname[35];
        double payment;
    };

    Write a program that adds and removes customer structures 
    from a stack, represented by a Stack class declaration. 
    
    Each time a customer is removed,
    his or her payment should be added to a running total, 
    and the running total should be reported. 
     
    Note: You should be able to use the Stack class unaltered; 
    just change the typedef declaration so that Item is type customer 
    instead of unsigned long.
*/
#include <iostream>
#include <cctype>  // or ctype.h
#include "Exercise_05_stack.h"
int main()
{
    using namespace std;
    Stack st; // create an empty stack
    char ch;
    customer po;
    cout << "Please enter A to add a purchase order,\n"
        << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch(ch)
        {
             case 'A':
             case 'a': cout << "Enter a PO number to add: ";
                       cin >> po.payment;
                       if (st.isfull())
                           cout << "stack already full\n";
                       else
                           st.push(po);
                       break;
             case 'P':
             case 'p': if (st.isempty())
                           cout << "stack already empty\n";
                       else {
                           st.pop(po);
                           cout << "PO #" << po.payment << " popped\n";
                       }
                       break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";
    return 0;
}