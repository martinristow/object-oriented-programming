#include <iostream>
#include <cstring>
using namespace std;
struct Student{
	float Prosek;
};
float Presmetaj(struct Student a[],int n)
{
	int zbir=0,i;
	for(i=0;i<=n;i++)
	{
	zbir+=a[i].Prosek;
	}
	return zbir/n;
}
int main()
{
	int i;
	Student a[3], *b;
	
	cout<<"Vnesi prosek na 3 studenti :\n";
	for(i=0;i<3;i++)
	{
	b=&a[i];
	cin>>(*b).Prosek;
	}
	cout<<"Prosek e "<<Presmetaj(a,3);
	return 0;
}
