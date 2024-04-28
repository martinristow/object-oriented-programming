#include <iostream>
using namespace std;
main(){
 int x=5, y=6;
 int const * p=&x;
 cout << "Vrednosta na adresata na koja pokazuva p e "<<*p<<endl;
 p=&y;
 cout << "Vrednosta na adresata na koja pokazuva p e "<<*p<<endl;
 x=10;/////////////greskata bese u *p///////////// 
 return 0;
}
