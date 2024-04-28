#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
class Vraboten{
 private:
 string ime,prezime;
 int plata;
 int id;
 public:
 void setVraboten(string imeV, string prezimeV, int plataV, int idV)
 {
  ime=imeV;
  prezime=prezimeV;
  plata=plataV;
  id=idV;
 }
 void pecati_Vraboten(){
 	cout<<ime<<","<<prezime<<","<<plata<<","<<id<<"."<<endl;
 }
 float returnPlata()
 {
 return plata;
 }
 bool operator>(Vraboten v){
 return(plata>v.returnPlata());
 }
 };
 template <class T>
void Sort(T a[], int n){
 bool sorted=false;
 int brojZameni=0;
 T pom;
 while(sorted==false){
 for(int i=0;i<n-1;i++){
 if(a[i]>a[i+1]){
 pom=a[i];
 a[i]=a[i+1];
 a[i+1]=pom;
 brojZameni++;
    }
 }
 if(brojZameni==0){
 sorted=true;
 break;
   }
 brojZameni=0;
   }
}
int main(){
 Vraboten vraboteni[5];
 string imeto,prezimeto;
 int platata;
 int identity;
 for(int i=0;i<5;i++){
 cout<<"Vnesi ime: "<<endl;
 cin>>imeto;
 cout<<"Vnesi prezime: "<<endl;
 cin>>prezimeto;
 cout<<"Vnesi plata: "<<endl;
 cin>>platata;
 cout<<"Vnesi id: "<<endl;
 cin>>identity;
 vraboteni[i].setVraboten(imeto,prezimeto,platata,identity);
 }
 Sort(vraboteni,5);
 for(int i=0;i<5;i++){
 vraboteni[i].pecati_Vraboten();
 }
 system("pause");
 return 0;
}
