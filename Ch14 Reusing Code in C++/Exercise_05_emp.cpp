 #include "Exercise_05_emp.h"

 using namespace std;

 void abstr_emp::ShowAll() const{
    cout << "First name: " << fname << endl;
    cout << "Last name: " << lname << endl;
    cout << "Job: " << job << endl;
 }

 void abstr_emp::SetAll(){
    cout << "input first name: " << endl;
    getline(cin, fname);
    cout << "input last name: " << endl;
    getline(cin, lname);
    cout << "input job: " << endl;
    getline(cin, job);
 }

std::ostream & operator<<(std::ostream & os, const abstr_emp & e){
    os << "fist name: " << e.fname << ", last name: " << e.lname
        << "job: " << e.job << endl;
    return os;
}

abstr_emp::~abstr_emp(){ }

void employee::ShowAll() const{
    abstr_emp::ShowAll();
}

void employee::SetAll(){
    abstr_emp::SetAll();
}

void manager::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << "In charge of numbers: " << inchargeof << endl;
}

void manager::SetAll()
{
    abstr_emp::SetAll();
    cout << "In charge of numbers: ";
    (cin >> inchargeof).get();
}

void fink::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << "reposts: " << reportsto << endl;
}

void fink::SetAll()
{
    abstr_emp::SetAll();
    cout << "reposts: ";
    getline(cin, reportsto);
}

void highfink::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << "In charge of numbers: " << InChargeOf() << endl;
    cout << "Reports to: " << ReportsTo() << endl;
}

void highfink::SetAll()
{
    abstr_emp::SetAll();
    cout << "In charge of numbers: ";
    (cin >> InChargeOf()).get();
    cout << "Reports to: ";
    getline(cin, ReportsTo());
}








