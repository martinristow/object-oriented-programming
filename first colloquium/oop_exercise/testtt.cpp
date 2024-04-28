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
		void set(int A=1)
		{
			a=A;
		}
		void get(int A=1)
		{
			cout<<A<<endl;;
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

int main()
{
	Kocka bate;
	
	int strana_a,i=1,n;
	cout<<"Vnesi strana a na "<<i++<<" -ta kocka ";
	cin>>n;
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


