#include <iostream>
using namespace std;
int main()
{
int a=5;
int *p;
p = &a;
cout << a << endl;
cout<< &a << endl;
cout<< p << endl;
cout<< &p << endl;
cout << *p << endl;
*p = 3;
cout << &p << endl;
cout << *p << endl;
cout << a << endl;
return 0;
}

