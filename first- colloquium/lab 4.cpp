#include <iostream>
#include <string.h>
/////////////////////102620///////////////////////
using namespace std;
int main() 
{
	int k,p,i,j=0;
	char zbor[2000];
	cin.getline(zbor,2000);
	cout<<"Vnesi go k:"<<endl;
	cin>>k;
	p=strlen(zbor);
	while(p>j+k){
		for(i=j;i<j+p;i++)
		cout<<zbor[i];
		j++;
		cout<<endl;
	}
	return 0;
}
