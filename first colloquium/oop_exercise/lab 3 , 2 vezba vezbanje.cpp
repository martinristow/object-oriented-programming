#include <iostream>
using namespace std;

class Kniga
{
	char Naslov[30],Avtor[30];
	int broj_strani,broj_primeroci, broj_izdadeni;
	public:
	void Postavi()
	{
	cout<<"Vnesi naslov na Knigata : \n";
	cin>>Naslov;
	cout<<"Vnesi avtor na knigata : \n";
	cin>>Avtor;
	cout<<"Vnesi kolku strani ima knigata : \n";
	cin>>broj_strani;
	cout<<"Vnesi broj na primeroci : \n";
	cin>>broj_primeroci;
	cout<<"Vnesi broj na izdadeni : \n";
	cin>>broj_izdadeni;
	}
	void Izdadi_primerok()
	{
	if(broj_izdadeni!=0)
	{
		cout<<"Izdadi primerok ! \n";
	}
	else 
	cout<<"Site primeroci se izdadeni ! \n";
	}
	void Pecati()
	{
	cout<<Naslov<<endl<<Avtor<<endl<<broj_strani;
	}
	void Vrati_Naslov()
	{
	cout<<Naslov<<endl;
	}
	void Vrati_avtor()
	{
	cout<<Avtor<<endl;
	}
	void Vrati_bs()
	{
	cout<<broj_strani<<endl;
	}
};
int main()
{
	Kniga A;
	int i,br;
	cout<<"Vnesi broj na knigi : \n";
	cin>>br;
	for(i;i<br;i++)
	{	
	A.Postavi();
	A.Pecati();
	A.Izdadi_primerok();
	A.Vrati_Naslov();
	A.Vrati_avtor();
	A.Vrati_bs();
}
	return 0;
}
