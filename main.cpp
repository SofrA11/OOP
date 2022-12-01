#include<iostream>
#include "Broj.h"
#include<cstdlib>
#include "RacionalanBroj.h"
#include "KompleksanBroj.h"
using namespace std;

void main()
{
	Broj* broj[2018];
	srand((unsigned)time(NULL));//ne sme da bud eu petlji
	for (int i = 0;i < 1009;i++)
	{
		int x, y;
		x = 55 + (rand() % 110);
		y = 1 + (rand() % 10);
		broj[i] = new RacionalanBroj(x, y);
	}

	for (int i = 1009;i < 2018;i++)
	{
		int x, y;
		x = 1 + (rand() % 50);
		y = 1 + (rand() % 50);
		broj[i] = new KompleksanBroj(x, y);
	}

	int i, j,x=0;
	Broj* pom;
	for (i = 0;i < 2018;i++)
	{
		for (j = 0;j < 2017;j++)
		{
			x = broj[j]->poredi(broj[j + 1]);
			if (x == -1)
			{
				pom = broj[j];
				broj[j] = broj[j + 1];
				broj[j + 1] = pom;
			}
		}
	}
	for (int i = 0;i < 2018;i++)
	{
		broj[i]->Print();
	}
	delete[] *broj;
}