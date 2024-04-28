#include<iostream>
#include<cmath>
using namespace std;
int korenuvaj(int br) throw (const char*){
	if(br<0)
	throw (const char*) "Negativen broj";
	return br;
}
int main(void){
	int n;
	cout<<"Vnesi cel broj: ";
	cin>>n;
	try{
		int rezultat=korenuvaj(n);
		cout<<"Koren na brojot "<<n<<" iznesuva: "<<sqrt(n);
	}
	catch(const char* m){
		cout<<"Greska: "<<m<<endl;
	}
	return 0;
}
