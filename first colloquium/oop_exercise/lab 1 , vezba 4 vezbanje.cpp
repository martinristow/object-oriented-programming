#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char niza[100];
	int i,j=0,k,p;
	cout<<"Vnesi tekst : \n";
	cin.getline(niza,100);
	cout<<"Vnesi go k: \n";
	cin>>k;
	p=strlen(niza);
	cout<<"Vneseniot tekst e : "<<(niza)<<endl;
	while(p>j+k)
	{
	for(i=j;i<j+p;i++)
	cout<<niza[i];
	j++;
	cout<<endl;
	}
	return 0;
}
