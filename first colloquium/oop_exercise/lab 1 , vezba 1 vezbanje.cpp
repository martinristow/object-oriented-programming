#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;

struct Cilindar
{
	float h,r;
};
float Povrsina(Cilindar a)
{
	float p;
	p=(2*pow(a.r,2)*PI+2*pow(a.r,2)*PI*a.h);
	return p;
}
float Volumen(Cilindar a)
{
	float v;
	v=(pow(a.r,2)*PI*a.h);
	return v;
}
int main()
{
	Cilindar a;
	float p,v;
	cout<<"Vnesi visina i radius : \n";
	cin>>a.h>>a.r;
	cout<<"Vnesenite vrednosti se "<<a.h<<" , i "<<a.r<<endl;
	cout<<" Plostinata iznesuva "<<Povrsina(a)<<endl;
	cout<<" Volumenot iznesuva "<<Volumen(a)<<endl;
	return 0;
}
