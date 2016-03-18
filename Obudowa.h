#include<string>
#include <iostream>

using namespace std;
class Obudowa{
protected:
	string kolor;
	string material;
	int waga;
public:
	Obudowa();
	//~Obudowa();
	void wyswietl();
	friend ofstream & operator<<(ofstream &s, Obudowa &k);
	friend ifstream & operator>>(ifstream &s, Obudowa &k);
	void zapiszDoPliku();
	void wczytajDoPliku();
};