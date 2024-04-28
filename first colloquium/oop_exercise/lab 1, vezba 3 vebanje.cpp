#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char niza[100];
	int j,i,brojki=0,bukva=0;
	cout<<"Vnesi tekst \n ";
	cin.getline(niza,100);
	cout<<" Vneseniot tekst e "<<(niza);
	j=strlen(niza);
	cout<<" Zborot e sostaven od "<<j<<" , karakteri.\n";
	for(i=0;i<=j;i++)
	{
	if(isdigit(niza[i]))
	brojki++;
	else if(isalpha(niza[i]))
	bukva++;
	}
	cout<<"Zborot "<<(niza)<<" , ima "<<brojki<<" brojki , i "<<bukva<<" bukvi \n";
	
	return 0;
	
}
