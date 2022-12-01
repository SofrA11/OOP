#include "KompleksanBroj.h"
#include <iostream>
using namespace std;

KompleksanBroj::~KompleksanBroj()
{
}

void KompleksanBroj::Print()
{
	
	cout << moduo(Re, Im) << ' ';
	for (int i = 0;i < 5;i++)
	{
		cout << t[i];
	}
	cout << endl;
}

int KompleksanBroj::poredi(KompleksanBroj& b1, KompleksanBroj& b2)
{
	int x, vrednost;
	b1.moduo(b1.Re,b1.Im) > b2.moduo(b2.Re, b2.Im) ? x = 1 : x = -1;
	return x;

}

double KompleksanBroj::getVr(double x, double y)
{
	return moduo(x,y);
}

double KompleksanBroj::moduo(int R,int I)
{
	double mod;
	mod = sqrt(R * R + I * I);
	return mod;
}
