#include <iostream>
#include <cmath>
using namespace std;

class Tocka{
      float x, y;
public:
      Tocka(){};
      Tocka(float x1, float y1){x=x1; y=y1;}
      void set(float x1, float y1){x=x1; y=y1;}
      void pecati(){ cout<<"("<<x<<", "<<y<<")";}
      void translacija(float tx, float ty){x+=tx; y+=ty;}
      float rastojanie(){return sqrt(pow(x,2)+pow(y,2));}
};

int main(){
       Tocka t[3]={Tocka(1,2), Tocka(2,2), Tocka(4,5)};
       int i;
       float x, y;
       
       for (i=0; i<3; i++){
           t[i].pecati();
           cout<<endl;
       }
       return 0;
}

