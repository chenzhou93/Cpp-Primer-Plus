#ifndef GOLF_H_
#define GOLF_H_

class Golf
{
    private:
    static const int Len = 40;
    char fullname[Len];
    int hcap;

    public:
    Golf();
    Golf(const char * name, int hc);
    void setGolf();
    void handicap(int hc);
    void showgolf();
};

#endif
