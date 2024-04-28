#include <iostream>
#include <cstring>
using namespace std; 
class Student{
      string ime, prezime;
      int indeks;
      float ocenka1, ocenka2, ocenka3;
public:
       Student(){}
       Student(string i, string p, int in, float o1, float o2, float o3)
        {ime=i; prezime= p; indeks=in; ocenka1=o1; ocenka2=o2; ocenka3=o3;}
       void set(string i, string p, int in, float o1, float o2, float o3)
        {ime=i; prezime= p; indeks=in; ocenka1=o1; ocenka2=o2; ocenka3=o3;}
       float Prosek() {return (ocenka1+ocenka2+ocenka3)/3;}
       void Pecati() 
{cout << indeks << "  "<< ime<< " "<< prezime << "  "<<Prosek()<<endl; }
       bool operator>(Student s) {return (Prosek()>s.Prosek());}
};
template<class C> void Sort(C a[], int n){
    C pom, max;
    int i,j, maxp;
	for (i = 0; i < n-1; ++i){
	    max=a[i];
	    maxp=i;
	    for (j=i+1; j<n; ++j)
	      if (a[j]>max) {
	         max=a[j];
	         maxp=j;
          }
        if (i!=maxp){
          pom=a[i];
          a[i]=a[maxp];
          a[maxp]=pom;
        }
     }
} 
int main(){
    Student s[20];
    int n,in,j;
    string i, p;
    float o1, o2, o3;
    cout<< "Vnesi go brojot na studenti -> "; cin >>n;
    for (j=0; j<n; j++){
        cout << "Vnesi ime:"; cin >>i;
        cout << "Vnesi prezime:"; cin >>p;
        cout << "Vnesi indeks:"; cin >>in;
        cout << "Vnesi prva ocenka:"; cin >>o1;
        cout << "Vnesi vtora ocenka:"; cin >>o2;
        cout << "Vnesi treta ocenka:"; cin >>o3;
        s[j].set(i,p,in,o1,o2,o3);
    } 
    Sort(s,n);
    for (j=0; j<n;j++)
       s[j].Pecati();
    return 0;
}



