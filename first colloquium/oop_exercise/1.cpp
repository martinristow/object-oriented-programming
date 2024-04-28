#include <iostream>
using namespace std;
int main()
{
int a;
int *pok;
a=10;
pok=&a;
cout<<"Adresata na a e "<<&a<<"\n Vrednosta na pok e "<<pok;
cout<<"Vrednosta na a e "<<a<<"\n Vrednosta na *pok e "<<*pok;
return 0;
}
