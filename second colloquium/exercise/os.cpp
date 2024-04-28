#include <iostream>
using namespace std;
class Kutija { 
protected:
    float visina;
    float sirina;
    float dolzina;
public: 
    Kutija(float v=1, float s=1, float d=1):visina(v), sirina(s), dolzina(d) {}
    virtual float Volumen() { return visina*sirina*dolzina;}
    void PrikaziV() { 
	cout << "Korisniot volumen na kutijata e " << Volumen()<<endl; } 
}; 
class StaklenaKutija: public Kutija {
public:
       StaklenaKutija(float v=1, float s=1, float d=1):Kutija(v,s,d){}
       float Volumen() { return 0.85*visina*sirina*dolzina;}
};
main(){
       Kutija k(2,3,4);
       StaklenaKutija sk(2,3,4);
       k.PrikaziV();
       sk.PrikaziV(); 
       return 0;
}


