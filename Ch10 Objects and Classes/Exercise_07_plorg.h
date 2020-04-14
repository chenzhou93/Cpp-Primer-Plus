#ifndef PLORG_H__
#define PLORG_H__

class Plorg{
    private:
    char name[20];
    int ci;

    public:
    Plorg();
    void setCI(int val);
    void report();
};
#endif