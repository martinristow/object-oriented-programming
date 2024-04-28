//Preopteretuvanje na + za ob + int i za ob + ob.
#include <iostream>
using namespace std;
class koordinati
{
  int x, y;
public:
  koordinati() { x=0; y=0; }
  koordinati(int i, int j) { x=i; y=j; }
  void zemi_xy(int &i, int &j) { i=x; j=y; }
  koordinati operator+(koordinati ob2);
  koordinati operator+(int i);
};
koordinati koordinati::operator+(koordinati ob2)
{
  koordinati privr;
  privr.x = x + ob2.x;
  privr.y = y + ob2.y;
  return privr;
}
koordinati koordinati::operator+(int i)
{
  koordinati privr;
  privr.x = x + i;
  privr.y = y + i;
  return privr;
}

int main()
{
  koordinati o1(10, 10), o2(5, 3), o3;
  int x, y;
  o3 = o1 + o2;
  o3.zemi_xy(x, y);
  cout << "(o1+o2) X: " <<x<< ", Y: " <<y<< "\n";
  o3 = o1 + 100;
  o3.zemi_xy(x, y);
  cout << "(o1+100) X: " <<x<< ", Y: " <<y<<"\n";
}

