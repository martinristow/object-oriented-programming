#include <iostream>
using namespace std;
class A{
	int i;
	public:
		a(){i=30;}
		void display(){cout<<i;
		}
		
};
class B:protected A{
}
int main()
{
	B b1;b1.display();

};
