#include"chlodzenie.h"
#include<fstream>
#include<iostream>
#include<string>

Chlodzenie::Chlodzenie(){
	int liczba_wiatrakow = 3;
	string rodzaj = "silkonowa";
	string nazwa_pasty_chlodniczej = "Pasta do zebow";
}
void Chlodzenie::zwieksz_liczbe_wiatrakow()
{
	liczba_wiatrakow + 1;
}



// zapisywanie
ofstream & operator << (ofstream &s, Chlodzenie &k)
{
	s << k.liczba_wiatrakow << endl;
	s << k.rodzaj << endl;
	s << k.nazwa_pasty_chlodniczej << endl;
	return s;
}

// wczytywanie
ifstream & operator >>(ifstream &s, Chlodzenie &k)
{
	s >> k.liczba_wiatrakow;
	s >> k.rodzaj;
	s >> k.nazwa_pasty_chlodniczej;
	return s;
}
void Chlodzenie::zapiszDoPliku()

{
	ofstream plik;
	plik.open("chlodzenie.txt");
	plik<<*this;
	plik.close();
}
void Chlodzenie::wczytajDoPliku()
{
	ifstream plik;
	plik.open("chlodzenie.txt");
	plik>>*this;
	plik.close();
}