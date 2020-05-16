/*
    3. Define a QueueTp template. 
    Test it by creating a queue of pointers-to-Worker 
    (as defined in Listing 14.10) 
    and using the queue in a program similar to that in Listing 14.12.
*/

#include <iostream>
#include <cstring>
#include <cstdlib>
#include "Exercise_03_qtp.h"
const int SIZE = 5;
using namespace std;

int main()
{
	Queuetp<Worker *> q(SIZE);
	Worker * pw;

    int ct;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the employee category:\n"
            << "w: waiter  s: singer  "
            << "t: singing waiter  q: quit\n";
        cin >> choice;
        while (strchr("wstq", choice) == NULL)
        {
            cout << "Please enter a w, s, t, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch(choice)
        {
            case 'w':   pw = new Waiter;
                        break;
            case 's':   pw = new Singer;
                        break;
            case 't':   pw = new SingingWaiter;
                        break;
        }
        cin.get();
			pw->Set();
			q.enqueue(pw);
    }

    cout << "\nHere is your staff:\n";
    int i;
    for (i = 0; i < ct; i++)
    {
        cout << endl;
			q.dequeue(pw);
			pw->Show();
			delete pw;
    }
    cout << "Bye.\n";
    return 0; 
}