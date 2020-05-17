/*
    5.
    Here are some class declarations:
    Note that the class hierarchy uses MI with a virtual base class, 
    so keep in mind the special rules for constructor initialization lists for that case. 
    
    Also note the presence of some protected-access methods. 
    This simplifies the code for some of the highfink methods. 
    (Note, for example, that if highfink::ShowAll() simply calls fink::ShowAll()
    and manager::ShowAll(), it winds up calling abstr_emp::ShowAll() twice.) 
     
    Provide the class method implementations and test the classes in a program. 
    Here is a minimal test program:
*/

#include <iostream>
#include "Exercise_05_emp.h"
using namespace std;

int main(){
    employee em("Trip", "Harris", "Thumper");
    cout << em << endl;
    em.ShowAll();

    manager ma("Amorphia", "Spindragon", "Nuancer", 5);
    cout << ma << endl;
    ma.ShowAll();

    fink fi("Matt", "Oggs", "Oiler", "Juno Barr");
    cout << fi << endl;
    fi.ShowAll();
    highfink hf(ma, "Curly Kew");  // recruitment?
    hf.ShowAll();
    cout << "Press a key for next phase:\n";
    cin.get();
    highfink hf2;
    hf2.SetAll();

    cout << "Using an abstr_emp * pointer:\n";
    abstr_emp  * tri[4] = {&em, &fi, &hf, &hf2};
    for (int i = 0; i < 4; i++)
        tri[i]->ShowAll();

    return 0;
}