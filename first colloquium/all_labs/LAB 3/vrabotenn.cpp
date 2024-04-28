#include <iostream>
#include "vraboten.cpp"
using namespace std;

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
