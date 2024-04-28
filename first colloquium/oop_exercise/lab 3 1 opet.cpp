#include <iostream>
#include <cmath>
using namespace std;

class Triagolnik{
	float a,b,c;
	public:
		Triagolnik(float A=1,float B=1, float C=1){a=A;b=B;c=C;}
		void set(float A,float B,float C){a=A;b=B;c=C;}
		float get(float a,float b,float c){return a,b,c;}
		float Perimetar(){return a+b+c;}
		float Plostina(){
		float s;
		s=(a+b+c)/2; 
		return sqrt(s*((s-a)*(s-b)*(s-c)));
};
int main()
{
	Triagolnik bate;
	int A,B,C;
	cout<<"Vnesi strani na triagolnikot :\n";
	cin>>A>>B>>C;
	bate.set(A,B,C);
	cout<<"Perimetarot iznesuva "<<bate.Perimetar()<<" , a plostinata "<<bate.Plostina()<<endl;
	
	return 0;
}
