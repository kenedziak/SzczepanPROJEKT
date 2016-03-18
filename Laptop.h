#pragma once

#include <string>
#include"komputer.h"

class Laptop : public Komputer {
	string kartaGraficzna;
	bool czBrudny;
	double matryca;
	int takowanieProcesora;

public:
	Laptop(); //konstruktor domyœlny 
	//~Laptop();//destruktor
	void zmienTakowanie(int nowe_takowanie); //procedura wirtualna
	void wyczysc(bool czysty);
	void zmienKarte(string nowa_karta);
	void nowaMatryaca(double nowa_matryca);
	void zapiszDoPliku();
	void wczytajDoPliku();
	friend ofstream & operator<<(ofstream &s, Laptop &k);
	friend ifstream & operator>>(ifstream &s, Laptop &k);
};