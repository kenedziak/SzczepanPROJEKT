#include<string.h>
#include "obudowa.h"
#include<fstream>
#include<iostream>
Obudowa::Obudowa(){
	kolor = "czarny";
	material = "amelinium";
	waga = 1;
}
void Obudowa::wyswietl(){
	cout << waga <<" " << kolor<< " " << material  << endl;
}

// zapisywanie
ofstream & operator<< (ofstream &s, Obudowa &k)
{
	s << k.kolor << endl;
	s << k.material << endl;
	s << k.waga << endl;
	return s;
}

// wczytywanie
ifstream & operator>>(ifstream &s, Obudowa &k)
{
	s >> k.kolor;
	s >> k.material;
	s >> k.waga;
	return s;
}

void Obudowa::zapiszDoPliku()

{
	ofstream plik;
	plik.open("obudowa.txt");
		plik << *this;
	plik.close();
}
void Obudowa::wczytajDoPliku()
{
	ifstream plik;
	plik.open("obudowa.txt");
	plik >> *this;
	plik.close();
}