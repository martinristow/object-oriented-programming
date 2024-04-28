#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int i,j;
	char niza[100],obraten_zbor[100];
	cout<<"Vnesi tekst : \n";
	cin.getline(niza,100);
	j=strlen(niza);
	for(i;i<=j;i++)
	obraten_zbor[i]=niza[j-1-i];
	cout<<"Obratniot zbor e "<<obraten_zbor;
	return 0;
}
