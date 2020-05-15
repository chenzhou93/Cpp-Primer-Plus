#ifndef WINE_H__
#define WINE_H__
#include <string>
#include <valarray>

using namespace std;

template <class T1, class T2>
class Pair{
private:
    T1 a;
    T2 b;
public:
    T1 & first();
    T2 & second();
    T1 first() const { return a; }
    T2 second() const { return b; }
    Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) { }
    Pair() {}
};

typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine{ 
    private:
    string name;
    int year;
    PairArray pairArray;
    ArrayInt years;
    ArrayInt bottles;

    public:
    Wine(const char * l, int y, const int yr[], const int bot[]);
    Wine(const char * l, int y);
    void GetBottles();
    string& Label();
    int sum();
    void Show();
};
#endif