/**
 * 9.
 * 
 * This exercise provides practice in writing functions dealing 
 * with arrays and structures. 
 * The following is a program skeleton. 
 * Complete it by providing the described functions:
 * 
 * 
    #include <iostream>
    using namespace std;
    const int SLEN = 30;
    struct STUDENT {
        char fullname[SLEN];
        char hobby[SLEN];
        int ooplevel;
    };
    // getinfo() has two arguments: a pointer to the first element of
    // an array of STUDENT structures and an int representing the
    // number of elements of the array. The function solicits and
    // stores data about STUDENTs. It terminates input upon filling
    // the array or upon encountering a blank line for the STUDENT
    // name. The function returns the actual number of array elements
    // filled.
    int getinfo(STUDENT pa[], int n);

    // display1() takes a STUDENT structure as an argument
    // and displays its contents
    void display1(STUDENT st);

    // display2() takes the address of STUDENT structure as an
    // argument and displays the structure's contents
    void display2(const STUDENT * ps);

    // display3() takes the address of the first element of an array
    // of STUDENT structures and the number of array elements as
    // arguments and displays the contents of the structures
    void display3(const STUDENT pa[], int n);

    int main()
    {
     cout << "Enter class size: ";
     int class_size;
     cin >> class_size;
     while (cin.get() != '\n')
         continue;

    STUDENT * ptr_stu = new STUDENT[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
    }
 * 
 * 
 * 
*/

#include <iostream>
using namespace std;
const int SLEN = 30;
struct STUDENT {
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
// getinfo() has two arguments: a pointer to the first element of
// an array of STUDENT structures and an int representing the
// number of elements of the array. The function solicits and
// stores data about STUDENTs. It terminates input upon filling
// the array or upon encountering a blank line for the STUDENT
// name. The function returns the actual number of array elements
// filled.
int getinfo(STUDENT pa[], int n);

// display1() takes a STUDENT structure as an argument
// and displays its contents
void display1(STUDENT st);

// display2() takes the address of STUDENT structure as an
// argument and displays the structure's contents
void display2(const STUDENT * ps);

// display3() takes the address of the first element of an array
// of STUDENT structures and the number of array elements as
// arguments and displays the contents of the structures
void display3(const STUDENT pa[], int n);

int main()
{
     cout << "Enter class size: ";
     int class_size;
     cin >> class_size;
     while (cin.get() != '\n')
         continue;

    STUDENT * ptr_stu = new STUDENT[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Done\n";
    return 0;
}

int getinfo(STUDENT pa[], int n){
    int i;
    for(i=0; i<n; i++){
        cin >> pa[i].fullname;
        cin.get();
        cin >> pa[i].hobby;
        cin.get();
        cin >> pa[i].ooplevel;
    }
    return i;
}

void display1(STUDENT st){
    cout << st.fullname << " " << st.hobby << " " << st.ooplevel << endl;
}

void display2(const STUDENT * ps){
    cout << ps->fullname << " " << ps->hobby << " " << ps->ooplevel << endl;
}

void display3(const STUDENT pa[], int n){
    for(int i=0; i<n; ++i){
        cout << pa[i].fullname << " " << pa[i].hobby << " " << pa[i].ooplevel << endl;
    }
}