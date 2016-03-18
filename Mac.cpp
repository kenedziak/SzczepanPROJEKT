#include <string>
#include <iostream>
#include <fstream>
#include "Mac.h"

using namespace std;

Mac::Mac()
{
#ifdef _DEBUG  
	cout << "Wywolano domyslny konstruktor Mac" << endl;
#endif
	pamiecOperacyjna = 8;
	czyKamera = true;
	lataGwarancji = 2;
}
void Mac::zmienPamiec(int nowa_pamiec){
	pamiecOperacyjna = nowa_pamiec;
}
void Mac::przedluzGwarancje(int dodaj_lata){
	lataGwarancji += dodaj_lata;
} 
// zapisywanie
ofstream & operator<< (ofstream &s, Mac &k)
{
	s << k.pamiecOperacyjna << endl;
	s << k.czyKamera << endl;
	s << k.lataGwarancji << endl;

	return s;
}

// wczytywanie
ifstream & operator>>(ifstream &s, Mac &k)
{
	s >> k.pamiecOperacyjna;
	s >> k.czyKamera;
	s >> k.lataGwarancji;

	return s;
}

void Mac::zapiszDoPliku()

{
	ofstream plik;
	plik.open("Mac.txt");
	plik << *this;
	plik.close();
}
void Mac::wczytajDoPliku()
{
	ifstream plik;
	plik.open("Mac.txt");
	plik >> *this;
	plik.close();
}
void Mac::obrazKamery() {
if (czyKamera) {
			cout << "        ------.       -------- "		<<	endl;
			cout << "      /        \\     /        \\"		<<	endl;
			cout << "     /_        _\\  / _         \\ "	<<	endl;
			cout << "    // \      / \\ // \      /-\ \\ "	<<	endl;
			cout << "    |\__\    /__/| |\__\    /__/  | "	<<	endl;
			cout << "    \\    ||    /   \\    ||    /"		<<	endl;
			cout << "     \\        /     \\        /"		<<	endl;
			cout << "      \\  __  /       \\  __  / "		<<	endl;
			cout << "       '.__.'          '.__.' "		<<	endl;
			cout << "        |  |            |  | "			<<	endl;
			cout << "        |  |            |  | "			<<	endl;
}
		 
		  else {
    cout<<"Nie ma kamery, moze jest niepodlaczona"	<<endl ;
}

		/*  Mac::~Mac()
		  {
		  }
		  */
}
