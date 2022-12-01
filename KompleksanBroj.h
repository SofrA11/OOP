#pragma once
#include "Broj.h"
class KompleksanBroj :
    public Broj
{
private:
    int Re;
    int Im;
    char* t{ new char[5]{'k','b','r','o','j'} };
public:
   //KompleksanBroj(int x, int y);
   KompleksanBroj(int x, int y) :Broj(getVr(x,y)) {
       Re = x;
       Im = y;
   }

    ~KompleksanBroj();
    virtual void Print();
    int poredi(KompleksanBroj& b1,KompleksanBroj& b2);
    virtual double getVr(double x, double y);
    double moduo(int R,int I);
};

