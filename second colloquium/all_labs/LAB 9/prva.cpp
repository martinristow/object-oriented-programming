#include <iostream>
#include <cstring>
using namespace std;

class Vraboten{
	private:
	char ime[20];
	char prezime[20];
	int broj_na_rabotni_denovi;
	float dodatoci;
	public:
		Vraboten(){};
		void prikazi_podatoci(char *i,char *p,int bnrd=0,int dod=0)
		{
			strcpy(ime,i);
			strcpy(prezime,p);
			broj_na_rabotni_denovi=bnrd;
			dodatoci=dod;
		}
		void vnesi_podatoci()
		{
			cin>>ime>>prezime>>broj_na_rabotni_denovi>>dodatoci;
		}
		void vrati_ime_prezime()
		{
			cout<<"Ime: "<<ime<<"\n"<<"Prezime: "<<prezime;
		}
		virtual void Presmetka_na_plata() = 0;
};

class Sluzbenik:Vraboten
{
	char pozicija[25];
	Sluzbenik(char *poz)
	{
	strcpy(pozicija,poz);
	}
	void prikazi_podatoci()
	{
		Sluzbenik::prikazi_podatoci();
	}
	int presmetaj_plata()
	{
		////////////////////////////////treba da se sredee///////////////////////////
	}
};
class Direktor:Vraboten{
	float patni_trosoci=0;
	public:
		Direktor(){};
		void prikazi_podatoci()
		{
			Direktor::prikazi_podatoci();
		}
		int presmetaj_plata()
		{
			//////////////da se naprave/////////////
		}
};

int main()
{
	Vraboten *a;
	Sluzbenik *b;
	Direktor *d;
	return 0;
}
