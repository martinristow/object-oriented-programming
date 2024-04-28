#include <iostream>
using namespace std;

class Sportist {
	protected :
		char ime_prezime[20];
		int god_na_ragj,visina;
		float godisna_zarabotuvacka;
		float koef_danok;
		public:
			void vnesi_podatoci();
			void *vratiIme_Prezime(){return ime_prezime;}
			void prikazi_podatoci()
			{
				cout<<"Ime i Prezime : "<<ime_prezime<<"\n"<<"Godina na ragjanje : "<<god_na_ragj<<"\n"<<"Visina : "<<visina<<endl;
				cout<<" Godisna zarabotuvacka "<<godisna_zarabotuvacka<<"\n"<<"Koeficient na danokot: "<<koef_danok<<endl;
			}
		virtual float danok()=0;
		};

void Sportist::vnesi_podatoci()
{
	cout<<"Vnesi Ime i prezime :\n";
	cin>>ime_prezime;
	cout<<"Vnesi godina na ragjanje :\n";
	cin>>god_na_ragj;
	cout<<"Vnesi visina :\n";
	cin>>visina;
	cout<<"Vnesi zarabotuvacka vo $ :\n";
	cin>>godisna_zarabotuvacka;
	cout<<"Vnesi koeficient na danok :\n";
	cin>>koef_danok;
}

class Teniser:public Sportist 
{
	char pol;
	public:
		void vnesi_podatoci()
		{
			Sportist::vnesi_podatoci();
			cout<<"Vnesi pol(M/Z) :\n";
			cin>>pol;
		}
		void prikazi_podatoci(){
		
			Sportist::prikazi_podatoci();
			
			
			cout<<"Pol :"<<pol<<endl;
	}
		float danok()
		{
			if(pol=='m')
			return koef_danok*godisna_zarabotuvacka*0.5;
			else return koef_danok*godisna_zarabotuvacka*0.3;
		}
		
};

class Rakometar : Sportist 
{
	int odigrani_natprevari;
	public:
		void vnesi_podatoci()
		{
			Sportist::vnesi_podatoci();
			
			cout<<"Vnesi broj na odigrani natprevari : ";
			cin>>odigrani_natprevari;
			
		}
		void prikazi_podatoci()
		{
			Sportist::prikazi_podatoci();
			
				cout<<"Odigrani natprevari : "<<odigrani_natprevari;
			
		}
		float danok()
		{
		return koef_danok*godisna_zarabotuvacka;
		}
};
int main()
{
	Sportist b;
	return 0;
}
