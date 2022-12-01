#pragma once
class Broj
{
private:
	//char* vrsta;
	double vrednost;
	char* vrsta{ new char[4]{'b','r','o','j'} };
public:
	int poredi(Broj* b1);
	virtual void Print();
	Broj(double m);
	virtual double getVr();
	virtual ~Broj();
protected:
	virtual void setVr();
};

