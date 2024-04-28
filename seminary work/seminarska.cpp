#include <iostream>//biblioteka
#include <cstring>//biblioteka
#include <fstream>//Biblioteka za rabota so datoteki
#include <iomanip>//biblioteka
using namespace std;

class Zemjodelska_Apteka//Osnovna klasa 
{
	protected:
	char ime_na_apteka[20];///ime na aptekata
	char grad[25];//kradot kaj sto se naogja aptekata
	char ime_na_ulica[40];//imeto na ulicata kaj sto se naogja aptekata
	int broj_na_adresa;//brojot na ulicata 
	char sopstvenik[25];//Gazdata na aptekata
	int vozrast_na_sopstvenik;//Kolku godini ima gazdata
	public:
		Zemjodelska_Apteka(){}//konstruktor
		Zemjodelska_Apteka(const char*imenaapt,const char *gra,const char* imenaul,int brojadre,const char* gazda,int godini)//Konstruktor so pocetnik parametri
		{
			strcpy(ime_na_apteka,imenaapt);
			strcpy(grad,gra);
			strcpy(ime_na_ulica,imenaul);
			broj_na_adresa=brojadre;
			strcpy(sopstvenik,gazda);
			vozrast_na_sopstvenik=godini;
		}
		void Postavi_Podatoci(const char*imenaapt,const char *gra,const char* imenaul,int brojadre,const char* gazda,int godini)//Funkcija za postavuvanje na podatocite 
		{
			cout<<"Vnesi ime na zemjodelskata apteka :";
			cin>>ime_na_apteka;
			cout<<"\n"<<"Vnesi Grad : ";
			cin>>grad;
			cout<<"\n"
			<<"Vnesi ime na ulica : ";
			cin>>ime_na_ulica;
			cout<<"Vnesi broj na ulicata : ";
			cin>>broj_na_adresa;
			cout<<endl<<"Vnesi sopstvenik : ";
			cin>>sopstvenik;
			cout<<"\n";
			cout<<"Vnesi godini na sopstvenikot : ";
			cin>>vozrast_na_sopstvenik;
			cout<<"\n";
		}
		void Prikazi_Podatoci(const char*imenaapt,const char *gra,const char* imenaul,int brojadre,const char* gazda,int godini)//funkcija za prikazuvanje na vnesenite podatoci
		{
			cout<<"Ime na Zemjodelskata Apteka :"<<ime_na_apteka<<"\n"<<" Grad : "<<grad<<"\n"<<"Ulica "<<ime_na_ulica<<" "<<broj_na_adresa<<endl;
			cout<<"Sopstvenik :"<<sopstvenik<<"\n"<<"Vozrast :"<<vozrast_na_sopstvenik<<endl;
		}
};

class Semenski_Materijal: Zemjodelska_Apteka//Ovaa izvedena klasa sodrzi informacii za semeskiot materijal
{
	char vid_na_pcenica[15];
	char vid_na_jacmen[15];
	char vid_na_tritikale[15];///////////////////////////treba da se prodolziii////////////
	char vid_na_orizova_arpa[20];
	
	int cena_na_pcenica;
	int cena_na_jacmen;
	int cena_na_tritikale;
	int cena_na_orizova_arpa; 
};

int main()
{
	Zemjodelska_Apteka *test;
	/////////////////////////////VO IZRABOTKA/////////////////////////////
	

}
