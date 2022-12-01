#include "Broj.h"
#include <iostream>
using namespace std;

Broj::Broj(double m)
{
    vrednost = m;
}

int Broj::poredi(Broj* b1)
{
    int x;
    vrednost > (b1->vrednost) ? x = 1 : x = -1;
    return x;
}

void Broj::Print()
{
    cout << vrednost<<' ';
    for (int i = 0;i < 4;i++)
    {
        cout << vrsta<<' ';
    }
    cout << endl;
    // &vrsta;
}

void Broj::setVr()
{
    vrednost = getVr();
}
double Broj::getVr()
{
    return vrednost;
}

Broj::~Broj()
{
   
}
