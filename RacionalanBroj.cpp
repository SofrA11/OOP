#include "RacionalanBroj.h"
#include <iostream>
using namespace std;

RacionalanBroj::~RacionalanBroj()
{

}

void RacionalanBroj::Print()
{
	cout << a / b << ' ';
	for (int i = 0;i < 5;i++)
	{
		cout << t[i];
	}
	cout << endl;
}

int RacionalanBroj::poredi(RacionalanBroj* b1)
{
	int x,vrednost;
	(a/b) > ((b1->a)/(b1->b))? x = 1 : x = -1;
	return x;
}
double  RacionalanBroj::getVr(double x,double y)
{
	return x/y;
}
