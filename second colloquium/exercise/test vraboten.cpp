#include <iostream>
#include <cstring>
using namespace std;

class vraboten {
	char ime_prezime[20];
	int plata;
	public:
		static int dodatokA,dodatokB,dodatokC,vr_A,vr_B,vr_C;
		 
		vraboten(char impr[20],int plat,int p)
		{
			strcpy(ime_prezime,impr);
			plata=p;
			if(plata<10000)
			vr_A++;
			else if(plata>10000 &&plata<20000)
			vr_B;
			else if(plata>20000)
			vr_C;
		}
		int Presmetaj_Plata(){
			if(plata>10000)
			return dodatokA+plata;
			else if(plata>20000)
			return dodatokB+plata;
			else if(plata>30000)
			return dodatokB+plata;
		}
		int Pecati()
		{
			cout<<"VKUPNO VRABOTENI PO KATEGORIJA :\n";
			cout<<"Brojot na vraboteni vo kategorija A : 1\n";
			cout<<"Brojot na vraboteni vo kategorija B : 1\n";
			cout<<"Brojot na vraboteni vo kategorija C : 1\n"<<endl<<endl<<endl<<endl;
			cout<<"Ime i Prezime :"<<ime_prezime<<"\n";
			cout<<"Osnovna plata: "<<plata<<"\n";
			cout<<"Osnovna plata + dodatok : "<<Presmetaj_Plata();
			
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

int main()
{
	return 0;
}

