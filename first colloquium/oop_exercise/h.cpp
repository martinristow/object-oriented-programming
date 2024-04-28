#include <iostream>
#include <cstring>
using namespace std;
int main (){
	char str[100] ;
	int n;
	cout<<"Vnesi go brojot na znaci: ";
	cin>>n;
	for(int i=0;i<n;i++)
	     cin>>str[i];
	//Neophodno, za da se terminira stringot!
	str[n]=0; 
	cout << str<<endl; 	
   return 0;
}

