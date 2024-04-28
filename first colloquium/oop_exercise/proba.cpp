#include <iostream>
#include <cmath>
using namespace std;

class Tocka{
      float x, y;
public:
      Tocka(){}
      Tocka(float x1, float y1)
            {x=x1; y=y1;}
      void set(float x1, float y1)
            {x=x1; y=y1;}
      void pecati()
              { cout<<"("<<x<<", "<<y<<")";}
      void translacija(float tx, float ty)
              {x+=tx; y+=ty;}
      float rastojanie()
              {return sqrt(pow(x,2)+pow(y,2));}
};
int main(){
       Tocka t(3,4), *tp;
       tp=&t;
       (*tp).translacija(2,2);
       (*tp).pecati();
       cout <<endl;
       t.pecati();
       cout <<endl;
       return 0;
}

