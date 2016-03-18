#include <iostream>
#include<string>
#include<fstream>
#include "komputer.h"
using namespace std;
int Komputer::liczba_obiektow = 0;

Komputer::Komputer(){
#ifdef _DEBUG
	cout << "Komputer Konst. domyslny" << endl;
#endif

	bool Czy_Stacjonarny = false;
	string nazwa = "Milus";
	int cena = 2000;
	liczba_obiektow++;
	for (int i = 0; i < 3; i++)
	{
		Obudowa denis;//tymczsowy obiekt
		obudowy.push_back(denis); //wpisywanie 3 obudow do wektora
	
	}
}
// zapisywanie
ofstream & operator << (ofstream &s, Komputer &k)
{
	s << k.nazwa << endl;
	s << k.cena << endl;
	return s;
}

// wczytywanie
ifstream & operator >>(ifstream &s, Komputer &k)
{
	s >> k.nazwa;
	s >> k.cena;
	return s;
}
Komputer::Komputer(string nazwa1, int cena1){
#ifdef _DEBUG  
	cout << "Wywolano konstruktor klasy komputer" << endl;
#endif
	cena = cena1;
	nazwa = nazwa1;
	liczba_obiektow++;
	for (int i = 0; i < 3; i++)
	{
		Obudowa denis;//tymczsowy obiekt
		obudowy.push_back(denis); //wpisywanie 3 obudow do wektora

	}
}

Komputer::Komputer(const Komputer &komputer){
#ifdef _DEBUG  
	cout << "Wywolano konstruktor kopiujacy klasy komputer" << endl;
#endif
	nazwa = komputer.nazwa;
	cena = komputer.cena;
	chlodzenie = komputer.chlodzenie;
	parametry = komputer.parametry;
	czy_stacjonarny = komputer.czy_stacjonarny;
	liczba_obiektow++;
	for (int i = 0; i < 3; i++)
	{
		Obudowa denis;//tymczsowy obiekt
		obudowy.push_back(denis); //wpisywanie 3 obudow do wektora

	}
}

Komputer::~Komputer()
{

}

void Komputer::wyswietlIlosc()
{
	cout << liczba_obiektow << endl;
}
void Komputer::wyswietlStan()
{
	cout << "Nazwa: " << nazwa << endl << "Cena  " << cena << endl;
	cout << parametry.podajSystem() << endl;
	for (int i = 0; i < obudowy.size(); i++){
		obudowy[i].wyswietl();                //wyswietla 3 obudowy ktore stworzylem
	}

}
void Komputer::wyswietlPelnaNazweUrzadzenia(){
	cout << nazwa << endl;
}

void Komputer::zmienNazwe(string &nowaNazwa)
{
	nazwa = nowaNazwa;
	cout << "Nazwa zostala zmieniona" << endl;
}
void Komputer::reinstalacjaSystemu(string nowy_system){
	parametry.reinstalacjaSystemu(nowy_system);
}




void Komputer::zapiszDoPliku(){
	string nazwa = "komputer.txt";
	ofstream plik;
	plik.open(nazwa.c_str(), std::ios::out);
	plik << *this;
	cout << "zapisuje: " << (*this).nazwa << " " << (*this).cena << endl;
	plik.close();
}

void Komputer::wczytajDoPliku(){
	ifstream plik;
	plik.open("komputer.txt");
	plik >> *this; 
	plik.close();

	cout << "odczytalem: " << (*this).nazwa << " " << (*this).cena << endl;
	/*parametry.wczytajDoPliku();
	chlodzenie.wczytajDoPliku();*/

	for (unsigned int i = 0; i < obudowy.size(); i++)
	{
		//obudowy jest tablica obiektu klasy obudowa
		obudowy[i].zapiszDoPliku();//kazda obudowa jest zapisywana do pliku 
	}
}
