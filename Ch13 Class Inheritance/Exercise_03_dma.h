// dma.h  -- inheritance and dynamic memory allocation
#ifndef DMA_H_
#define DMA_H_
#include <iostream>

//Add class ABC
class ABC{
    protected:
        char * label;
        int rating;
    public:
        ABC(const char * l = "null", int r = 0);
        ABC(const ABC & abc);
        virtual ~ABC();
        virtual void View() const = 0;
};

//  Base Class Using DMA
class baseDMA : public ABC
{
public:
    baseDMA(const char * l = "null", int r = 0):ABC(l,r){ }
    baseDMA(const ABC & rs);
    virtual ~baseDMA();
    virtual void View() const;
    baseDMA & operator=(const baseDMA & rs);
};

// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA :public ABC
{
private:
    enum { COL_LEN = 40};
    char color[COL_LEN];
public:
    lacksDMA(const char * c = "blank", const char * l = "null",
              int r = 0);
    lacksDMA(const char * c, const ABC & rs);
    virtual void View() const;
};

// derived class with DMA
class hasDMA :public ABC
{
private:
    char * style;
public:
    hasDMA(const char * s = "none", const char * l = "null",
              int r = 0);
    hasDMA(const char * s, const ABC & rs);
    hasDMA(const hasDMA & hs);
    ~hasDMA();
    virtual void View() const;
    hasDMA & operator=(const hasDMA & rs);
    friend std::ostream & operator<<(std::ostream & os,
                                     const hasDMA & rs);
};

#endif