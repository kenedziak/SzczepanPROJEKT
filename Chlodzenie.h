#pragma once
#include<string>


using namespace std;

class Chlodzenie
{
	int liczba_wiatrakow;
	string rodzaj;
	string nazwa_pasty_chlodniczej;
public:
	Chlodzenie();
	//~Chlodzenie();
	void zwieksz_liczbe_wiatrakow();
	friend ofstream & operator<<(ofstream &s, Chlodzenie &k);
	friend ifstream & operator>>(ifstream &s, Chlodzenie &k);
	virtual void zapiszDoPliku();
	virtual void wczytajDoPliku();
};