#include <iostream>
////////////////////////////////////////102620///////////////////////////////////
using namespace std;

class Kniga
{
	char naslov[20]; char avtor[30];
	int broj_strani,broj_primeroci, broj_izdadeni;
	public:
		void Postavi()
		{
			cout<<"Vnesi naslov na knigata :\n";
			cin>>naslov;
			cout<<"Vnesi avtor na knigata :\n";
			cin>>avtor;
			cout<<"Vnesi kolku strani ima knigata :\n";
			cin>>broj_strani;
			cout<<"Vnesi broj na primeroci :\n";
			cin>>broj_primeroci;
			cout<<"Vnesi kolku primeroci se izdadeni :\n";
			cin>>broj_izdadeni;
		}
		void izdadi_primerok(){
			if(broj_primeroci!=0)
			{
				cout<<" Izdadi primerok !";
			}
			else 
			cout<<" Site primeroci se izdadeni !";
		}
		void Pecati(){
			cout<<broj_primeroci<<endl<<broj_izdadeni<<endl;
		}
		void Vrati_naslov(){
			cout<<naslov;
		}
		void Vrati_avtor(){
			cout<<avtor;
		}
		void Vrati_bs(){
			cout<<broj_strani;
		}
};
int main()
{
	Kniga bate;
	int n,i;
	cout<<" Kolku knigi ke vnesuvas ?\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		bate.Postavi();
		bate.Pecati();
		bate.izdadi_primerok();
		bate.Vrati_naslov();
		bate.Vrati_avtor();
		bate.Vrati_bs();
	}
	return 0;
}
