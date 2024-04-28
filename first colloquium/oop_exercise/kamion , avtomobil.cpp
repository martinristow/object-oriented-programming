#include <iostream>
using namespace std;
class Vozilo{
	int trkala;
	int sirina;
	int patnici;
	public:
		void postavi_trkala(int broj){trkala=broj;}
		int zemi_trkala(){return trkala;}
		void postavi_sirina(int dimenzija){sirina=dimenzija;}
		int zemi_sirina(){return sirina;}
		void postavi_patnici(int patnik){patnici=patnik;}
		int prikazi_patnik(){return patnici;}
};

class Traktor : public Vozilo {
	int tezina;
	int tovar;
	public:
		void postavi_tezina(int kg){tezina=kg;}
		int vrati_tezina(){return tezina;}
		void postavi_tovar(int tovarce){tovar=tovarce;}
		int vrati_tovar(){return tovar;}
		void prikazi();
}; 

class Avtomobil : public Vozilo{
	int marka;
	int boja;
	public:
		void postavi_marka(int tip){marka=tip;}
		int prikazi_marka(){return marka;}
		void postavi_boja(int boicka){boja=boicka;}
		int prikazi_boja(){return boja;}
		void prikazi();
};

void Traktor ::prikazi(){
	cout<<"trkala : "<<zemi_trkala()<<"'\n";
	cout<<"sirina : "<<zemi_sirina()<<"'\n";
	cout<<"patnici : "<<prikazi_patnik()<<"'\n";
	cout<<"tezina : "<<vrati_tezina()<<"'\n";
	cout<<"tovar : "<<vrati_tovar()<<"'\n";
}

void Avtomobil ::prikazi(){
	cout<<"trkala : "<<zemi_trkala()<<"'\n";
	cout<<"sirina : "<<zemi_sirina()<<"'\n";
	cout<<"patnici : "<<prikazi_patnik()<<"'\n";
	cout<<"marka : "<<prikazi_marka()<<"'\n";
	cout<<"boja : "<<prikazi_boja()<<"'\n";
}

int main() {
	Traktor t1, t2;
	Avtomobil c;
	t1.postavi_trkala(30);
	t1.postavi_tezina(1852);
	t1.postavi_patnici(5);
	t1.postavi_sirina(351);
	t1.postavi_tovar(3200);
	
	t1.prikazi(); cout << "\n";
	
	c.postavi_trkala(4);
	c.postavi_sirina(218);
	c.postavi_patnici(5);
	c.postavi_marka(15);
	c.postavi_boja(8);
	c.prikazi();
	return 0;
}

