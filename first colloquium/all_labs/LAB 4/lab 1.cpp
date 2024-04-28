#include <iostream>
#include <cmath>
using namespace std;

class Kocka{
	int a;
	public:
		Kocka(int A=1)
		{
		a=A;	
		}
		Kocka(const Kocka &b);
		void set(int A)
		{
			a=A;
		}
		void get(int A)
		{
			cout<<A;
		}
		int Volumen()
		{
		int v;
		return v=pow(a,3);
		}
		int Plostina()
		{
		int p;
		return p=6*pow(a,2);
		}
		int Dijagonala()
		{
		int d;
		return d=sqrt(3*a);
		}
};
Kocka::Kocka(const Kocka &b){
      a=b.a;
      cout<<"Povik na copy konstruktorot"<<endl;
     
}
int main()
{
	Kocka bate;
	Kocka bre(bate);
	int strana_a,i=1,n;
	cout<<"Vnesi vrednost na strana "<<i++<<" -ta kocka :\n";
	cin>>strana_a;
	for(i=0;i<n;i++)
	{
		bate.set();
		bate.get();
		bate.Plostina();
		bate.Volumen();
		bate.Dijagonala();

		
	}
	return 0;
}


