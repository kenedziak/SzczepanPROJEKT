#include <iostream>
#include <string>
#include <vector>
#include "Komputer.h"
#include "Laptop.h"
#include "Mac.h"

using namespace std;
int opcja;
//Glowny program main
int main(){
		 
	Komputer zastepczy("ciastko", 69);
	Komputer test1;
	Laptop test2;
	Laptop test21;
	Laptop test22;
	Laptop test23;
	Laptop test24;
	Mac test3;


	//Menu programu
	do {
		switch (opcja)
		{
		case 0:
			cout << "MENU PROGRAMU" << endl;
			cout << "-------------------------------" << endl;
			cout << "Wybierz opcje:" << endl;
			cout << "1: Zapis stanu obiektu do pliku" << endl;
			cout << "2: Odczyt stanu obiektu z pliku" << endl;
			cout << "3: Testowanie polimorfizmu" << endl;
			cout << "4  Wyswietlanie danych obiektow" << endl;
			cout << "5: Zmien nazwe komputera " << endl;
			cout << "6: Zamknij program" << endl;
			cout << "-------------------------------" << endl;
			cout << "Opcja: ";

			cin >> opcja;
			break;
		case 1:
			cout << "ZAPISANO DO PLIKU" << endl;
			test1.zapiszDoPliku("nazwapliku.txt");
			test2.zapiszDoPliku();
			test3.zapiszDoPliku();
			opcja = 0;
			break;
		case 2:
			zastepczy.wczytajDoPliku();
			zastepczy.wyswietlStan();
			opcja = 0;
			break;
		case 3:
		{
				  MaszynaObliczeniowa *wsk;
				  Laptop lap;
				  Mac mc;
				  wsk = &lap;
				  wsk->zapiszDoPliku();
				  wsk = &mc;
				  wsk->zapiszDoPliku();
				  opcja = 0;
				  break; }
			case 4:
			cout << "Dane obiektu klasy komputer:" << endl;
			test1.wyswietlStan();
			cout << "Dane obiektu klasy laptop:" << endl;
			test2.wyswietlStan();
			cout << "Dane obiektu klasy Mac:" << endl;
			test3.wyswietlStan();
			opcja = 0;

			break;
			case 5:
				string nazwa1 = "makk";
				zastepczy.zmienNazwe(nazwa1);
				zastepczy.wyswietlStan();
				opcja = 0;

				break;
		}

	} while (opcja != 6);
	return 0;
}
