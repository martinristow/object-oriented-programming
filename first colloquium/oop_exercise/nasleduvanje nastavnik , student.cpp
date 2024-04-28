#include <iostream>
#include <string>
using namespace std;
class Lice {
protected:
      string ime;
      string prezime;
      char pol;
      int vozrast;
public:
       Lice (string i, string pr, char p, int v):ime(i), prezime(pr), pol(p), vozrast(v){}
       Lice (){}
       void setL(string i, string pr, char p, int v) 
         {ime=i; prezime=pr; pol=p; vozrast=v;}
       friend ostream& operator<<(ostream& out, const Lice& l);
}; 

ostream& operator<<(ostream& out, const Lice& l){
         return out<<l.ime<< " " <<l.prezime<<" ima "<<l.vozrast<<" godini, pol "<< l.pol;
} 
 
enum zvanje {pomasis,asistent, docent, vonprof, redprof};
const string zvanjeS[] = {"pomlad asistent","asistent", "docent", "vonreden profesor","redoven profesor"};

class Nastavnik : public Lice
{
      zvanje z;
public:
      Nastavnik (string i, string pr, char p, int v, zvanje z1):Lice(i, pr,p,v), z(z1){} 
      Nastavnik() {}
      void setL(string i, string pr, char p, int v, zvanje z1) 
         {Lice::setL(i,pr,p,v); z=z1;}
      zvanje getZ() {return z;}
      friend ostream& operator<<(ostream& out, const Nastavnik& n);
};

ostream& operator<<(ostream& out, const Nastavnik& n){
         return out<<(Lice)n<<", zvanje "<< zvanjeS[n.z-1]<<endl;
}
 
class Student: public Lice{
      float prosek;
public:
      Student (string i, string pr, char p, int v, float pros):Lice(i, pr,p,v), prosek(pros){} 
      Student() {}
      void setL(string i, string pr, char p, int v, float pros) 
         {Lice::setL(i,pr,p,v); prosek=pros;}
      float getP() {return prosek;};
      friend ostream& operator<<(ostream& out, const Student& s);
};

ostream& operator<<(ostream& out, const Student& s) {
         return out<<(Lice)s<<", prosek "<< s.prosek<<endl;
}
 
int main()
{
    Student studenti[20];
    Nastavnik nastavnici[20];
    string ime, pr;
    char p;
    int n,m,i,j,v,bn=0,bs=0, suma=0,z;
    float pros;
    do {
    cout<<"1. Dodavanje na nov nastavnik ili student"<<endl;
    cout<<"2. Prikazuvanje na lista od nastavnici ili studenti"<<endl;
    cout<<"3. Prikazuvanje na lista od studenti so prosek pogolem od odredena vrednost"<<endl;
    cout<<"4. Vkupen broj na nastavnici so odredeno zvanje"<<endl;
    cout<<"5. Kraj"<<endl;
    cin>>n;
 
           if(n==1){
    		cout<<"1. Nastavnik "<<endl;
    		cout<<"2. Student "<<endl;
    		cin>>m;
    		if(m==1){
    			if(bn>=20)
    				cout<<"nema mesto"<<endl;	
    			else{
    			           cout<<"Vnesi nastanik "<<endl;
                    	                           cout << "Ime: "; cin >> ime;
                  	                           cout << "Prezime: "; cin >> pr;
                   	                           do {
                                                               cout << "Pol (m/z): "; cin >> p; 
	                                           } while (p!='m' & p!='z' & p!='M' & p!='Z');
                                                           cout << "Vozrast: "; cin >> v;
                                                           cout << "Zvanje: "<<endl; 
 		                           cout << "1. Pomlad asistent"<<endl;
                                                           cout << "2. Asistent"<<endl;
                                                           cout << "3. Docent"<<endl;
                                                           cout << "4. Vonreden profesor"<<endl; 
	                                           cout << "5. Redoven profesor"<<endl;
                   		           do { cin>>z;  } while (z>5 | z<1);
                   	                           nastavnici[bn++].setL(ime, pr, p, v,(zvanje)z); }        
                                 }
 
if(m==2)  {
                if(bs>=20)
                    cout<<"nema mesto"<<endl;
    		else
    		{
    		cout<<"Vnesi student "<<endl;
                    	cout << "Ime: "; cin >> ime;
                   	 cout << "Prezime: "; cin >> pr;
                    	do {
                    	       cout << "Pol (m/z): "; cin >> p;
                    	} while (p!='m' & p!='z' & p!='M' & p!='Z');
                    	cout << "Vozrast: "; cin >> v;
                    	cout << "Prosek: "; cin>>pros;
                    	studenti[bs].setL(ime, pr, p, v,pros);
                   	bs++;
                    }
             }
  }
 
if(n==2) {
    	cout<<"1. Za nastavnici "<<endl;
    	cout<<"2. Za studenti "<<endl;
    	cin>>m;
    	if(m==1)
    	    for(i=0;i<bn;i++)
    	           cout<<nastavnici[i]<<endl;
    	if(m==2)
    	    for(j=0;j<bs;j++)
    	           cout<<studenti[j]<<endl;
}
if (n==3) {
                cout << "Vnesi prosek: "; cin >> pros; 
	for(i=0;i<bs;i++)
                       if (studenti[i].getP()>=pros)
    		cout<<studenti[i]<<endl;
 } 

if (n==4)
        {
           cout << "Vnesi zvanje: "; cin >> z;
           for (i=0;i<bn;i++)
              if (nastavnici[i].getZ()==(zvanje)z)
                suma++;
           cout << "Ima "<< suma<< " "<<zvanjeS[z-1]<<endl; 
    	}
    } 
while (n!=5);
return 0;
}


