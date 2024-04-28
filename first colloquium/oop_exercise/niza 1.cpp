#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char niza[100];
	int i,j,mali=0,golemi=0,mesta=0,broj=0;
	cout<<"Vnesi tekst brapoo:\n";
	cin.getline(niza,100);
	j=strlen(niza);
	for(i=0;i<=j;i++)
	{
	
	if(isupper(niza[i]))
	golemi++;
	else if(islower(niza[i]))
	mali++;
	else if(isdigit(niza[i]))
	broj++;
	else if(isspace(niza[i]))
	mesta++;
}
	cout<<golemi<<mali<<mesta<<broj;
	return 0;
}
