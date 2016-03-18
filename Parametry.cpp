#include<string>
#include "parametry.h"
#include<fstream>
#include<iostream>
Parametry::Parametry(){
	int rdzeniowosc_procesora = 2;
	bool czy_64x = false;
	string producent = "apple";
	string system = "IOS";
}
void Parametry::reinstalacjaSystemu(string nowy_system){
	cout << "Podaj nazwe nowego systemu" << endl;
	cin >> nowy_system;
	system = nowy_system;
}
// zapisywanie
ofstream & operator<< (ofstream &s, Parametry &k)
{
	s << k.rdzeniowosc_procesora << endl;
	s << k.czy_64x << endl;
	s << k.producent << endl;
	s << k.system << endl;
	return s;
}

// wczytywanie
ifstream & operator>>(ifstream &s, Parametry &k)
{
	s >> k.rdzeniowosc_procesora;
	s >> k.czy_64x;
	s >> k.producent;
	s >> k.system;
	return s;
}



void Parametry::zapiszDoPliku()

{
	ofstream plik;
	plik.open("parametry.txt");
	plik << *this;
	plik.close();
}
void Parametry::wczytajDoPliku()
{
	ifstream plik;
	plik.open("parametry.txt");
	plik >> *this;
	plik.close();
}

