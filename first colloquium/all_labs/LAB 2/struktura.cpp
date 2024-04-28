#include <iostream>

///////////////////////102620//////////////////
using namespace std;
struct Student
{
	float prosek;
	
};
float Presmetaj(struct Student a[],int n){
       float zbir=0;
       int i;
       for(i=0;i<n;i++){
       zbir+=a[i].prosek;
   }
       return zbir/n;
   }
int main()
{
	int i;
	Student a[3], *b;
	cout<<"Vnesi oceni \n";
	for(int i=0;i<3;i++){
		b=&a[i];
		cin>>(*b).prosek;
	}
	cout<<"Prosekot na studentite e :"<<Presmetaj(a,3);

return 0;
}
