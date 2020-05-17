#ifndef PERSON_H__
#define PERSON_H__
#include <string>
#include <iostream>
using namespace std;
class Person{
    private:
    string firstName;
    string lastName;
    protected:
    void Data();
    public:
    Person(string fn = "null", string ln = "null"):firstName(fn), lastName(ln){ }
    virtual ~Person(){ };
    virtual void Show() = 0;
};

class Gunslinger : virtual public Person{
    private:
    double drawTime;
    int nothesNum;
    public:
    Gunslinger() : Person(), drawTime(0.00), nothesNum(0) { }
    Gunslinger(string fn, string ln, double dt, int non):Person(fn, ln), drawTime(dt), nothesNum(non){ }
    Gunslinger(Person& p, double dt = 0.0, int n = 0):Person(p), drawTime(dt), nothesNum(n){ }
    virtual ~Gunslinger() { }
    double Draw(){return drawTime;}
    void Show();
};

class PokerPlayer : virtual public Person{
    private:
    double draw;
    public:
    PokerPlayer() : Person(), draw(0.00){ }
    PokerPlayer(string fn, string ln, double dt):Person(fn, ln), draw(dt){ }
    PokerPlayer(Person& p, double dt = 0.0):Person(p), draw(dt){ }
    virtual ~PokerPlayer() { }
    double Draw();
    void Show();
};

class BadDude : public Gunslinger, public PokerPlayer{
    public:
    BadDude(string fn="null", string ln="null", double dt=0.00, int nn=0, double d=0.00)
            :Person(fn, ln), Gunslinger(fn,ln,dt,nn), PokerPlayer(fn, ln, d) { }
    BadDude(Person& p,  double dt = 0.00, int nn = 0, double d = 0.00)
            :Person(p), Gunslinger(p, dt, nn), PokerPlayer(p, dt=0.00) { }
    BadDude(Gunslinger& gl, double d=0.00)
            :Person(gl), Gunslinger(gl), PokerPlayer(gl, d){ }
    BadDude(PokerPlayer& pl, double dt, int nn)
            :Person(pl), Gunslinger(pl, dt, nn), PokerPlayer(pl){ }

    double Gdraw();
    double Cdraw();
    void Show();
};
#endif