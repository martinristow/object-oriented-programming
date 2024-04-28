#include <iostream>
using namespace std;

class Kniga
{
	char Naslov[30],Avtor[30];
	int  broj_strani,broj_primeroci, broj_izdadeni;
	public:
		void Postavi()
		{
			cout<<"Vnesi naslov :\n";
			cin>>Naslov;
			cout<<"Vnesi avtor : \n";
			cin>>Avtor;
			cout<<"Vnesi broj strani :\n";
			cin>>broj_strani;
			cout<<"Vnesi broj primeroci : \n";
			cin>>broj_primeroci;
			cout<<"Vnesi broj izdadeni : \n";
			cin>>broj_izdadeni;
		}
		void Izdadi_primerok()
		{
		if(broj_izdadeni !=0)
		{
		cout<<" Izdadi primerok !\n";
		}
		else 
		cout<<" Site primeroci se izdadeni ! \n";
		}
		void Pecati()
		{
			cout<<Naslov<<endl<<Avtor<<endl<<broj_strani<<endl;
		}
		void Vrati_naslov()
		{
			cout<<Naslov;
		}
		void Vrati_avtor()
		{
			cout<<Avtor;
		}
		void Vrati_br()
		{
			cout<<broj_strani;
		}
};
int main()
{
	Kniga A;
	int i,br;
	cout<<"Vnesi broj na knigi : \n";
	cin>>br;
	for(i=0;i<br;i++)
	{
		A.Postavi();
		A.Pecati();
		A.Izdadi_primerok();
		A.Vrati_naslov();
		A.Vrati_avtor();
		A.Vrati_br();
	}
	return 0;
}
