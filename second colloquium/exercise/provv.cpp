#include <iostream>
using namespace std;

template<typename T> bool is_palindrom(T a[], int n){
	bool palindrom=1;
	for (int i = 0; i < n; ++i)
	     if (a[i]!=a[n-i-1]) palindrom =0;
	return palindrom;
} 


	int main(){
    int b[]={1, 2, 3, 2, 1};
    char c[]={'p', 'o', 'p'}, c1[]={'p', 'r', 'v' };
    if (is_palindrom(b,sizeof(b)/sizeof(int)) )
      cout << "Nizata b e palindrom"<<endl;
    else
      cout << "Nizata b ne e palindrom"<<endl;
    if (is_palindrom(c,3) )
      cout << "Nizata c e palindrom"<<endl;
    else
      cout << "Nizata c ne e palindrom"<<endl;
    if (is_palindrom(c1,(c1,3)) )
      cout << "Nizata c1 e palindrom"<<endl;
    else
      cout << "Nizata c1 ne e palindrom"<<endl;
    return 0;
}




