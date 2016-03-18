#pragma once
#include <string>
#include <iostream>


using namespace std;

class Parametry {
	int rdzeniowosc_procesora;
	bool czy_64x;
	string producent;
	string system;
public:
	Parametry();		//konstruktor
	//~Parametry();	//destruktor
	void reinstalacjaSystemu(string nowy_system);
	void zapiszDoPliku();
	void wczytajDoPliku();
	friend ofstream & operator<<(ofstream &s, Parametry &k);
	friend ifstream & operator>>(ifstream &s, Parametry &k);
	string podajSystem(){
		return system;
	}

	bool sprawdzBitowosc(){ 
		return czy_64x; 
	}
};