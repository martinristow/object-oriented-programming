#include <iostream>
#include "vraboten.h"
using namespace std;

	void Vraboten:: Postavi()
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
		float Vraboten:: Presmetaj_Plata()
		{
			float platicka;
			return  platicka=broj_casovi * nadomestok_cas;
		}
	   float Vraboten:: Presmetaj_Staz()
		{
			float stazce;
			return stazce=2022-god_pocetok;
		}
		void Vraboten:: Pecati()
		{
			cout<<" Ime : "<<ime<<endl;
			cout<<" Prezime : "<<prezime<<endl;
			cout<<" Plata : "<<Presmetaj_Plata()<<" denari."<<endl;
			cout<<" Staz : "<<Presmetaj_Staz()<<" godini."<<endl;
		}
