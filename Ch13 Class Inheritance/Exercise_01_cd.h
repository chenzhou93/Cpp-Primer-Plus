#ifndef CD_H__
#define CD_H__

// base class
class Cd {  // represents a CD disk
    private:
        char performers[50];
        char label[20];
        int selections;   // number of selections
        double playtime;  // playing time in minutes
    public:
        Cd(const char * s1, const char * s2, int n, double x);
        Cd(const Cd & d);
        Cd();
        virtual ~Cd(){};
        virtual void Report() const;  // reports all CD data
        Cd & operator=(const Cd & d);
};

class Classic : public Cd{
    private:
    char primaryWork[100];

    public:
    Classic();
    Classic(const char* work, const char * s1, const char * s2, int n, double x);
    virtual void Report() const;
    Classic & operator=(const Classic & d);
};

#endif