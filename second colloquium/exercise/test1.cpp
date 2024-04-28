
#include <iostream>
using namespace std;

class Osnovna{
public:
    int i, j;
public:
    void set(int a, int b) { i=a; j=b; }
    void pecati() { cout << i << " " << j << "\n"; }
};

class Izvedena : protected Osnovna{ 
    int k;
public:
    Izvedena(int a, int b, int x) { i=a; j=b; k=x; }
    void pecati_k() { pecati(); cout << k << "\n"; }
};
int main(){
    Izvedena ob(1,2,3);
    ob.pecati_k(); 
    return 0;
}

