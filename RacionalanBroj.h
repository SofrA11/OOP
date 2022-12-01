#pragma once
#include "Broj.h"
class RacionalanBroj :
    public Broj
{
private:
    int a;
    int b;
    char* t{ new char[5]{'r','b','r','o','j'} };
public:
    RacionalanBroj(int x, int y) :Broj(getVr(x,y)) {
        a = x;
        b = y;
    };
    ~RacionalanBroj();
    virtual void Print();
    int poredi(RacionalanBroj* b1);
    virtual double getVr(double x,double y);
};

