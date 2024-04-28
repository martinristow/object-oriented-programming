# include <iostream>
# include <cmath>
#define PI 3.14
////////////////////////////////102620////////////////////////////////////
using namespace std;

struct Cilindar {
	int r,h;
};
float povrsina (Cilindar c){
   
    float p=(2*pow(c.r,2)*PI)+(2*c.r*PI*c.h);
    return p;
}

int volumen (Cilindar c) {
	int v=(pow(c.r,2)*PI*c.h);
	return v;
}

int main (){
    Cilindar c;
    int v;
    float p;
    
    int i;
    for(i>0;i<=3;i++)
    {
    cout<<"Vnesi radius i vnesi gu visinata na cilindarot :  \n";
    cin>>c.r>>c.h;
    cout<<"Vnesenite vrednosti na cilindarot se : "<<c.r<<" , "<<c.h<<endl;
    cout<<"Povrsinata na cilindarot iznesuva "<<povrsina(c)<<endl;
    cout<<"Volumenot na cilindarot iznesuva "<<volumen(c)<<endl;
    
}
system("pause");
    return 0;
}
