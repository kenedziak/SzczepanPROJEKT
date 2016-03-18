#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include "parametry.h"
#include "obudowa.h"
#include "chlodzenie.h"
#include <vector>
#include "MaszynaObliczeniowa.h"
using namespace std;
//Klasa Komputer, pochodna klasy MaszynaObliczeniowa
class Komputer:
public MaszynaObliczeniowa {
	Parametry parametry;
	Chlodzenie chlodzenie;
	vector <Obudowa> obudowy;
protected://zmienne okreslajace stacjonarnosc (?) i nazwe komputera
	bool czy_stacjonarny;
	string nazwa;
private:
	static int liczba_obiektow; ///zmienna statyczna pokazujaca liczbe obiektow
public:
	Komputer();	//kontruktor domyslny
	Komputer(string n, int cena);	//kontruktor
	~Komputer();	//destruktor
	Komputer(const Komputer &komputer); //konstruktor kopiujacy
	void wyswietlPelnaNazweUrzadzenia();
	void zmienNazwe(string &nowa_nazwa);

	void wyswietlStan();//Funkcja wyœwietlaj¹ca aktualny stan
	static void wyswietlIlosc();//Procedura wyswielaj¹ca iloœæ stworzonych obiektów
	void reinstalacjaSystemu(string nowy_system);//funkcja pozwalajaca zmienic system , funkcja nic nie zwraca
	friend ifstream & operator >> (ifstream &s, Komputer &k); // strumien wejscia 
	friend ofstream & operator << (ofstream &s, Komputer &k);// strumien wyjscia
	void zapiszDoPliku(); //funkcja zapisujaca do pliku
	void wczytajDoPliku(); //funkcja wczytujaca z pliku
};