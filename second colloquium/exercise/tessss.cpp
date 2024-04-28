#include <iostream>
#include <cstring>
using namespace std;
class MyException {
public:
	char str_what[80];
	MyException() { *str_what = 0; }
	MyException(const char *s) { strcpy(str_what, s); }
};
int main() {
	int a, b;
	try {
		cout << "Vnesete delenik i delitel: ";
		cin >> a >> b;
		if(!b)
		       throw MyException("Delenje so nula!");
		else
		       cout << "Kolicnikot e " << a/b << "\n";
	}
	catch (MyException e) { 
		cout << e.str_what << "\n";
	}
	return 0;
}
