#include <iostream>
#include <cstring>
using namespace std;

class vraboten {
	char ime_prezime[20];
	int plata=0;
	public:
		static int dodatokA,dodatokB,dodatokC,vr_A,vr_B,vr_C;
		 
		vraboten(char impr[20],int plat)
		{
			strcpy(ime_prezime,impr);
			
			plata=plat;
			if(plata<10000)
			vr_A++;
			else if(plata>10000 &&plata<20000)
			vr_B++;
			else if(plata>20000)
			vr_C++;
		}
		int Presmetaj_Plata(){
			if(plata<10000)
			return dodatokA+plata;
			else if(plata<20000)
			return dodatokB+plata;
			else if(plata<30000)
			return dodatokB+plata;
		}
		int Pecati()
		{
			
			cout<<"Ime i Prezime :"<<ime_prezime<<"\n";
			cout<<"Osnovna plata: "<<plata<<"\n";
			cout<<"Osnovna plata + dodatok : "<<Presmetaj_Plata();
			cout<<endl<<endl;
		}
		static void promeni_dodatoka(int a){
			dodatokA=a;
		}
		static void promeni_dodatokb(int b){
			dodatokB=b;
		}
		static void promeni_dodatokc(int c){
			dodatokC=c;
		}
};
int vraboten::dodatokA
{
	dodatokA=5000
};
int vraboten::dodatokB
{
	dodatokB=8000
};
int vraboten::dodatokC
{
	dodatokC=10000
};
int vraboten::vr_A
{
	vr_A=0
};
int vraboten::vr_B
{
	vr_B=0
};
int vraboten::vr_C
{
	vr_C=0
};
int main()
{
	 vraboten a ("Martin Ristov",9000);
	 vraboten *b = new vraboten("Nikola ", 11000);
	 vraboten *c = new vraboten("KING",21000);
	 cout<<"Brojot na vraboteni vo grupa A iznesuva : "<<a.vr_A<<endl;
	 cout<<"Brojot na vraboteni vo grupa B iznesuva : "<<b->vr_B<<endl;
	 cout<<"Brojot na vraboteni vo grupa C iznesuva : "<<c->vr_C<<endl;
	 cout<<endl;
	a.Presmetaj_Plata();
	a.Pecati();
	b->Pecati();
	c->Pecati();
	a.promeni_dodatoka(8000);
	cout<<"Promena na danokot :"<<a.dodatokA;
	delete b;
	delete c;
	
	return 0;
}

	


