#include<iostream>
using namespace std;
template<class T>void Sort(T a[], int n){
T pom,max;
int i,j,maxp;
for(i=0;i<n-1;++i){
max=a[i];
maxp=i;
for(j=j+1;j<n;++j)
if(a[j]>max){
max=a[j];
maxp=j;
}
if(i!=maxp){
pom=a[i];
a[i]=a[maxp];
a[maxp]=pom;
}}}
