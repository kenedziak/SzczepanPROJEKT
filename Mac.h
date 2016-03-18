#pragma once
#include<string>
#include"komputer.h"

class Mac : public Komputer {
	int pamiecOperacyjna;
	bool czyKamera;
	int lataGwarancji;
public:
	Mac(); //konstruktor domyœlny 
	//~Mac();//destruktor
	void zmienPamiec(int nowa_pamiec);////funkcja pokazujaca zmienic pamiec ktora nic nie zwraca
	void obrazKamery();//funkcja pokazujaca obraz z kamery ktora nic nie zwraca
	void przedluzGwarancje(int dodaj_lata);//funkcja pozwalajaca przedluzyc grwarancje, funkcja nic nie zwraca
	void zapiszDoPliku();//funkcja zapisujaca do pliku
	void wczytajDoPliku();//funkcja wczytujaca z pliku
	friend ofstream & operator<<(ofstream &s, Mac &k);
	friend ifstream & operator>>(ifstream &s, Mac &k);
};