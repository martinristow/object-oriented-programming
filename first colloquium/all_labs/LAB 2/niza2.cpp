#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char niza[100];
	int i,j,golemi_bukvi=0,mali_bukvi=0,cifri=0,prazni_mesta=0;
	cout<<"Vnesi tekst :\n";
	cin.getline(niza,100);
	j=strlen(niza);
	for(i;i<=j;i++)
	if(isupper(niza[i]))
	golemi_bukvi++;
	else if(islower(niza[i]))
	mali_bukvi++;
	else if(isdigit(niza[i]))
	cifri++;
	else if(isspace(niza[i]))
	prazni_mesta++;
	cout<<"Vneseniot tekst e "<<(niza)<<" , golemi bukvi ima "<<golemi_bukvi<<" , mali bukvi ima "<<mali_bukvi;
	cout<<" , brojki ima "<<cifri<<" , prazni mesta ima "<<prazni_mesta<<" . \n"<<endl;
	return 0;
	
	
}

