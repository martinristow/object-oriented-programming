#include<iostream>
#include<cstring>
using namespace std;
class Vraboten{
	char ime[20], prezime[20];
	int ID, plata;
	public:
		Vraboten(){};
		void set()
		{
			cout<<"Vnesi ime: ";
			cin>>ime;
			cout<<"Vnesi prezime: ";
			cin>>prezime;
			cout<<"Vnesi ID: ";
			cin>>ID;
			cout<<"Vnesi plata: ";
			cin>>plata;
		}
		void pecati(){
			cout<<endl;
			cout<<"Ime: \tPrezime: \tID: \tPlata:\n";
			cout<<ime<<"\t"<<prezime<<"\t\t"<<ID<<"\t"<<plata<<"\n";
		}
		bool operator>(Vraboten &v1){
			return(plata>v1.plata);
		}
};
template<class T> void sort(T t[], int n){
    T pom, max;
    int i,j, maxp;
	for (i = 0; i < n-1; ++i){
	    max=t[i];
	    maxp=i;
	    for (j=i+1; j<n; ++j)
	      if (t[j]>max) {
	         max=t[j];
	         maxp=j;
          }
        if (i!=maxp){
          pom=t[i];
          t[i]=t[maxp];
          t[maxp]=pom;
        }
     }
}
int main()
{
	Vraboten vrab[5];
	char ime[20], prezime[20];
	int id, plata, i;
	for(i=0;i<5;i++)
	{
		cout<<"Vnesi podatoci za "<<i+1<<"-ot vraboten:\n";
		vrab[i].set();
	}
	sort(vrab, 5);
	cout<<"\n\nPodredeni:\n\n";
	for(i=0;i<5;i++)
		{
			vrab[i].pecati();
			cout<<endl;
		}
	return 0;
}

