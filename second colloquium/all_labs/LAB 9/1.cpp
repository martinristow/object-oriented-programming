#include<iostream>
#include<cstring>
using namespace std;
class Vraboteni{
	protected:
	char ime[20], prezime[20];
	int rab_den, dodatoci;
	public:
	Vraboteni(char Ime,char Prezime,int Rab,int Dodatoci){
	ime=Ime;
	prezime=Prezime;
	rab_den=Rab;
	dodatoci=Dodatoci;
	}
	void prikazi()
	{cout<<"Ime: "<<vrati_ime()<<"\nPrezime: "<<vrati_prezime()<<"\nRabotni denovi:"<<rab_den;}
	char* vrati_ime(){return ime;}
	char* vrati_prezime(){return prezime;}
	virtual int presmetaj_plata()=0;
};
class Sluzbenik: public Vraboteni{
	char pozicija[20];
	public:
	Sluzbenik(char* i, char* p, int d,char* poz): Vraboteni(i,p,d){
	strcpy(pozicija, poz);}
	void prikazis(){
		prikazi();
		cout<<"\nPozicija: "<<pozicija<<endl;
	}
	int presmetaj_plata(){return rab_den*1000;}
};
class Direktor: public Vraboteni{
	int pat;
	public:
	Direktor(char* i, char* p, int d, int patni,int dod):Vraboteni(i,p,d){pat=patni;dodatoci=dod;}
	void prikazi_d(){
		prikazi();
		cout<<"\nPatni trosoci: "<<pat;
	}
	int presmetaj_plata(){ return 2000*rab_den+pat+dodatoci;}
};
int main()
{
	char i1[20],p2[20],poz[20] ,p1[20], i2[20];
	int br1, br2, p, dodat;
	cout<<"Vnesi podatoci za sluzbenikot:\n";
	cout<<"Ime: ";
	cin>>i1;
	cout<<"Prezime: ";
	cin>>p1;
	cout<<"Broj na rabotni denovi: ";
	cin>>br1;
	cout<<"Pozicija: ";
	cin>>poz;
	Sluzbenik s(i1,p1,br1,poz);
	cout<<"Vnesi podatoci za direktorot:\n";
	cout<<"Ime: ";
	cin>>i2;
	cout<<"Prezime: ";
	cin>>p2;
	cout<<"Broj na rabotni denovi: ";
	cin>>br2;
	cout<<"Patni trosoci: ";
	cin>>p;
	cout<<"Dodatoci: ";
	cin>>dodat;
	Direktor d(i2,p2,br2,p,dodat);
	Vraboteni *v1, *v2;
	v1=&s;
	v2=&d;
	cout<<endl;
	s.prikazis();
	cout<<endl;
	d.prikazi_d();
	cout<<endl;
	cout<<"\nPlata na sluzbenik: "<<v1->presmetaj_plata()<<endl;
	cout<<"Plata na direktor: "<<v2->presmetaj_plata()<<endl;
	return 0;
}

