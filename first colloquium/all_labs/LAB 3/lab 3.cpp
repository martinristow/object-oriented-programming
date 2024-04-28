#include <iostream>
////////////////////////////////////////102620///////////////////////////////////
using namespace std;

class Vraboten
{
	char ime[20], prezime[20];
	int broj_casovi, nadomestok_cas, god_pocetok,s;
	public:
		void Postavi()
		{
			cout<<"Vnesi ime na vraboteniot : \n";
			cin>>ime;
			cout<<"Vnesi prezime na vraboteniot :\n";
			cin>>prezime;
			cout<<"Vnesi broj na casovi :\n";
			cin>>broj_casovi;
			cout<<"Vnesi nadomestok na casovi : \n";
			cin>>nadomestok_cas;
			cout<<"Vnesi godina na pocetok so rabota :\n";
			cin>>god_pocetok;
		}
		float Presmetaj_Plata()
		{
			float platicka;
			return  platicka=broj_casovi * nadomestok_cas;
		}
		float Presmetaj_Staz()
		{
			float stazce;
			return stazce=2022-god_pocetok;
		}
		void Pecati()
		{
			cout<<" Ime : "<<ime<<endl;
			cout<<" Prezime : "<<prezime<<endl;
			cout<<" Plata : "<<Presmetaj_Plata()<<" denari."<<endl;
			cout<<" Staz : "<<Presmetaj_Staz()<<" godini."<<endl;
		}
};
int main()
{
	Vraboten bate;
	int br_vr,i,n;
	cout<<"Za kolku vraboteni ke vnesuvas podatoci : \n";
	cin>>br_vr;
	for(i=0;i<br_vr;i++)
	{
		bate.Postavi();
		bate.Presmetaj_Plata();
		bate.Presmetaj_Staz();
		bate.Pecati();
	}
	return 0;
}
