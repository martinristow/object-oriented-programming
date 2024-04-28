
#include <iostream >
#include <cstring>
using namespace std;
class lice{        
        char *ime;
        int starost;
public:
       void vnesi();
       void pecati();
	   ~lice(){delete ime;}
};
void lice::vnesi(){
     char buf[20];
     cout << "Vnesi ime: ";
     cin >> buf;
     ime = new char[strlen(buf)+1];
     strcpy (ime, buf);
     cout << "Vnesi vozrast: ";
     cin >> starost;
}

void lice::pecati(){
     cout << "Ime:" << ime << " vozrast:" << starost << endl;
}
main (){
     lice a,b;
     a.vnesi();
     b.vnesi();
     a.pecati();
     b.pecati();
     return 0;
}

