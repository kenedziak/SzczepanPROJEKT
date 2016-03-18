#include <string>
#include <iostream>
#include <fstream>
#include "Laptop.h"

using namespace std; 

Laptop::Laptop(){

#ifdef _DEBUG  
	cout << "Wywolano domyslny konstruktor Laptopa" << endl;
#endif
	kartaGraficzna = "msiGeForce";
	czBrudny = true;
	matryca = 15,6;
	takowanieProcesora = 2200;
	
}
void Laptop::zmienTakowanie(int nowe_takowanie){
#ifdef _DEBUG  
	cout << "Wywolano metode wirutalna w klasie Komorka" << endl;
#endif
	takowanieProcesora = nowe_takowanie;
}
void Laptop::zmienKarte(string nowa_karta){
	kartaGraficzna = nowa_karta;
}
void Laptop::nowaMatryaca(double nowa_matryca){
	matryca = nowa_matryca;
}
void Laptop::wyczysc(bool czysty){
	if (czBrudny){
		cout << "Jestem juz czysciutki" << endl;
	}
	else {
		cout << "Po co mnie czyscic jak jestem umyty? " << endl;
	}
}
	void Laptop::zapiszDoPliku(){

		ofstream plik;
		plik.open("laptop.txt");
		plik << *this;
		plik.close();
	}
	void Laptop::wczytajDoPliku()
	{
		ifstream plik;
		plik.open("laptop.txt");
		plik >> *this;
		plik.close();
	}
	// zapisywanie
	ofstream & operator<< (ofstream &s, Laptop &k)
	{
		s << k.kartaGraficzna<<endl;
		s << k.czBrudny<<endl;
		s << k.matryca<<endl;
		s << k.takowanieProcesora<<endl;
		return s;
	}

	// wczytywanie
	ifstream & operator>>(ifstream &s, Laptop &k)
	{
		s >> k.kartaGraficzna;
		s >> k.czBrudny;
		s >> k.matryca;
		s >> k.takowanieProcesora;
		return s;
	}

/*	Laptop::~Laptop()
	{

	}
	*/