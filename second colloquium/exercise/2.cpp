#include <iostream>
#include <cmath>
using namespace std;

class Sportist{
protected:
      int godina, visina, zarabotuvacka;
     char ime_prezime[20];
     float koef_danok;
public:
     virtual void vnesiPodatoci();
    virtual char *vratiIme_Prezime(){return ime_prezime;}
   virtual  void prikazi_podatoci()
                {cout<<ime_prezime<<" godina "<<godina<<" visina "<<visina<<
                " zarabotuvacka "<<zarabotuvacka<<" koef. danok "<<koef_danok<<" ";}
    virtual float danok()=0;
};

void Sportist::vnesiPodatoci(){
		cout<<"Vnesi Ime i prezime ";
		cin>>ime_prezime;
                              cout<<"Vnesi godina ";
		cin>>godina;
		cout<<"Vnesi visina vo cm ";
		cin>>visina;
		cout<<"Vnesi zarabotuvacka vo $ ";
		cin>>zarabotuvacka;
		cout<<"Vnesi koeficient za presmetuvaje na danok ";
		cin>>koef_danok;
	}


class Teniser : public Sportist{
        char pol;
public:
       virtual void vnesiPodatoci(){
                          Sportist::vnesiPodatoci();
		cout<<"Vnesi pol m/z ";
		cin>>pol;
        }
        void prikazi_podatoci(){
                          Sportist::prikazi_podatoci();
		cout<<"Pol "<<pol<<endl;
        }
        float danok(){ 
          if (pol=='m') return koef_danok*zarabotuvacka*0.5;
          else return koef_danok*zarabotuvacka*0.3;
        }
};


class Rakometar : public Sportist{
	int broj;
public:
	 virtual void vnesiPodatoci(){
                                Sportist::vnesiPodatoci();
		cout<<"Vnesi broj na odigrani natprevari ";
		cin>>broj;
	}
	void prikazi_podatoci(){
                                Sportist::prikazi_podatoci();
		cout<<"natprevari "<<broj<<endl;
	}
	float danok(){return koef_danok*zarabotuvacka;}
};
int main()
{
	Sportist a;
	Teniser t;
	Rakometar ic;
	return 0;
}


