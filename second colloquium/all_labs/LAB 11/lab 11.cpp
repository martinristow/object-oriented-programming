#include<iostream>
#include<cmath>
using namespace std;
class Krug{
	protected:
		double r;
		public:
			double VnesPresmetkaPovrsina(){
				cout<<"r=";
				cin>>r;
				return pow(r,2)*3.14;
			}
};
class Konus:private Krug{
	float h;
	public:
		Konus(){cout<<"h=";
		cin>>h;}
		float VolumenKonus(){
			double R=VnesPresmetkaPovrsina();
			return R*1/3*h;
		}
};
int main(){
	Konus k;
	cout<<"Volumenot na konusot e: "<<k.VolumenKonus();
	return 0;
}

