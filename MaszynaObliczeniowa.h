class MaszynaObliczeniowa //klasa abstrakcykja
{
protected:
	int cena;
public:
	virtual void zapiszDoPliku() = 0; //tworzy procedure abstarakcyjna
	virtual void wczytajDoPliku() = 0; //tworzy procedure abstrakcyjna
};