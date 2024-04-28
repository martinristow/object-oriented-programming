#include <iostream>//biblioteka
#include <cstring>//biblioteka
#include <fstream>//Biblioteka za rabota so datoteki
#include <iomanip>//biblioteka
using namespace std;

class Zemjodelska_Apteka//Osnovna klasa
{
	protected:
	char ime_na_apteka[20];///ime na aptekata
	char grad[25];//gradot kaj sto se naogja aptekata
	char ime_na_ulica[40];//imeto na ulicata kaj sto se naogja aptekata
	int broj_na_adresa;//brojot na ulicata
	char sopstvenik[25];//Gazdata na aptekata
	int vozrast_na_sopstvenik;//Kolku godini ima gazdata
	public:
		Zemjodelska_Apteka(){}//konstruktor
		Zemjodelska_Apteka(const char*imenaapt,const char gra,const char imenaul,int brojadre,const char* gazda,int godini)//Konstruktor so pocetni parametri
		{
			strcpy(ime_na_apteka,imenaapt);
			strcpy(grad,gra);
			strcpy(ime_na_ulica,imenaul);
			broj_na_adresa=brojadre;
			strcpy(sopstvenik,gazda);
			vozrast_na_sopstvenik=godini;
		}
		void Postavi_Podatoci()//Funkcija za postavuvanje na podatocite
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
		void Prikazi_Podatoci(const char*imenaapt,const char gra,const char imenaul,int brojadre,const char* gazda,int godini)//funkcija za prikazuvanje na vnesenite podatoci
		{
			cout<<"Ime na Zemjodelskata Apteka :"<<ime_na_apteka<<"\n"<<" Grad : "<<grad<<"\n"<<"Ulica "<<ime_na_ulica<<" "<<broj_na_adresa<<endl;
			cout<<"Sopstvenik :"<<sopstvenik<<"\n"<<"Vozrast :"<<vozrast_na_sopstvenik<<endl;
		}
};

class Semenski_Materijal: Zemjodelska_Apteka//Ovaa izvedena klasa sodrzi informacii za semeskiot materijal
{
	protected:
	char vid_na_pcenica[15];
	char vid_na_jacmen[15];
	char vid_na_tritikale[15];
	char vid_na_orizova_arpa[20];
	int cena_na_pcenica;
	int cena_na_jacmen;
	int cena_na_tritikale;
	int cena_na_orizova_arpa;
	int kolicina_pcenica, kolicina_jacmen,kolicina_tritikale,kolicina_oriz;
	public:
	Semenski_Materijal(){}///Default Konstruktor
	Semenski_Materijal(const char*pcen,const char*jacm,const char*trit,const char* oriz,int cenap,int cenaj,int cenat,int cenaoriz,int kolp,int kolj,int kolt,int kolo)//Konstruktor so pocetni parametri
	{
		strcpy(vid_na_pcenica,pcen);
		strcpy(vid_na_jacmen,jacm);
		strcpy(vid_na_tritikale,trit);
		strcpy(vid_na_orizova_arpa,oriz);
		cena_na_pcenica=cenap;
		cena_na_jacmen=cenaj;
		cena_na_tritikale=cenat;
		cena_na_orizova_arpa=cenaoriz;
		kolicina_pcenica=kolp;
		kolicina_jacmen=kolj;


	}
	void Postavi()//Funkcija za postavuvanje na podatocite od tastatura
	{
		cout<<"Vnesi sorta na pcenica :\n ";
		cin>>vid_na_pcenica;
		cout<<"Vnesi sorta na jacmen :\n ";
		cin>>vid_na_jacmen;
		cout<<"Vnesi sorta na tritikale :\n ";
		cin>>vid_na_tritikale;
		cout<<"Vnesi sorta na orizova arpa : \n";
		cin>>vid_na_orizova_arpa;
		cout<<"Cena na pcenica : \n";
		cin>>cena_na_pcenica;
		cout<<"Cena na jacmen : \n";
		cin>>cena_na_jacmen;
		cout<<"Cena na tritikale : \n";
		cin>>cena_na_tritikale;
		cout<<"Cena na orizova arpa : \n";
		cin>>cena_na_orizova_arpa;

	}
	void Pecatenje_Podatoci_Za_Semenski_Materijal(const char*pcen,const char*jacm,const char*trit,const char* oriz,int cenap,int cenaj,int cenat,int cenaoriz,int kolj,int kolt,int kolo)
	{
		cout<<"Sorta :"<<vid_na_pcenica<<"     "<<" Cena : "<<cena_na_pcenica<<endl;
		cout<<"Sorta :"<<vid_na_jacmen<<"     "<<" Cena : "<<cena_na_jacmen<<endl;
		cout<<"Sorta :"<<vid_na_tritikale<<"     "<<" Cena : "<<cena_na_tritikale<<endl;
		cout<<"Sorta :"<<vid_na_orizova_arpa<<"     "<<" Cena : "<<cena_na_orizova_arpa<<endl;
	}
	void Kolicina_na_Semenski_Materijal(const char*pcen,const char*jacm,const char*trit,const char* oriz,int cenap,int cenaj,int cenat,int cenaoriz,int kolj,int kolt,int kolo)
	{
		cout<<"Vnesi kolicina na pcenica : ";
		cin>>kolicina_pcenica;
		cout<<"Vnesi kolicina na jacmen : ";
		cin>>kolicina_jacmen;
		cout<<"Vnesi kolicina na tritikale : ";
		cin>>kolicina_tritikale;
		cout<<"Vnesi kolicina na orizova arpa : ";
		cin>>kolicina_oriz;
	}
	virtual int presmetaj_naracka1()
	{
		return kolicina_pcenica*cena_na_pcenica;
	}
	virtual	int presmetaj_naracka2()
	{
		return kolicina_jacmen*cena_na_jacmen;
	}
	virtual	int presmetaj_naracka3()
	{
		 return kolicina_tritikale*cena_na_tritikale;
	}
	virtual int presmetaj_naracka4()
	{
		 kolicina_oriz*cena_na_orizova_arpa;
	}
	bool operator>(Semenski_Materijal &f){}
};
class Preparati: public Zemjodelska_Apteka
{
	protected:
		char preparad_za_poljedelski_kulturi[20];
		char preparad_za_gradinarski_kulturi[20];
		char preparad_za_lozovi_nasadi[20];

	public:
		Preparati(){}
		Preparati(const char*poljedelski,const char*gradinarski,const char*lozje)
		{
			strcpy(preparad_za_poljedelski_kulturi,poljedelski);
			strcpy(preparad_za_gradinarski_kulturi,gradinarski);
			strcpy(preparad_za_lozovi_nasadi,lozje);
		}
		void Vnesi_Preparati(const char*poljedelski,const char*gradinarski,const char*lozje)
		{
			cout<<"Vnesi preparad za poljedelski kulturi ";
			cin>>preparad_za_poljedelski_kulturi;
			cout<<endl;
			cout<<"Vnesi preparad za gradinarski kulturi ";
			cin>>preparad_za_gradinarski_kulturi;
			cout<<endl;
			cout<<"Vnesi preparad za lozov nasad ";
			cin>>preparad_za_lozovi_nasadi;
			cout<<endl;
			}
			void Prikazi_Podatoci(const char*poljedelski,const char*gradinarski,const char*lozje)
			{
				cout<<"Preparat za poljedelski kulturi :"<<" "<<preparad_za_poljedelski_kulturi<<endl;
				cout<<"Preparad za gradinarski kulturi :"<<" "<<preparad_za_gradinarski_kulturi<<endl;
				cout<<"Preparat za lozov nasad :"<<" "<<preparad_za_lozovi_nasadi<<endl;
			}
			virtual int Presmetaj_Preparat1()
			{
				cout<<"Cenata na "<<preparad_za_poljedelski_kulturi<<" iznesuva 2150 denari .\n ";
				cout<<"Cenata na "<<preparad_za_gradinarski_kulturi<<" iznesuva 4500 denari .\n ";
				cout<<"Cenata na "<<preparad_za_lozovi_nasadi<<" iznesuva 3200 denari .\n ";
			}

};
class Isklucok {
public:
	char isk[80];
	Isklucok() { *isk = 0; }
	Isklucok(char *i) { strcpy(isk, i); }
};

template<class X>void Sortiraj(X niza[],int n){
	X p,max;
	int i,j,maxpoz;
	for(i=0;i<n-1;++i){
	max=niza[i];
	maxpoz=i;
	for(j=i+1;j<n;++j){
		if(niza[j]>max){
			max=niza[j];
			maxpoz=j;
		}
		if(i!=maxpoz){
			p=niza[i];
			niza[i]=niza[maxpoz];
			niza[maxpoz]=p;
		}}}
	}
int main()
{
	int n;
	Zemjodelska_Apteka *test;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"-----ZEMJODELSKA APTEKA------"<<endl;
        cout<<"1.Vnesi podatoci za firmata"<<endl;
        cout<<"2.Vnesi semenski materijal"<<endl;
        cout<<"3.Vnesi preparati"<<endl;
        cout<<"4.Vnesi Gjubrivo"<<endl;
        cout<<"5.Pecati podatoci za firmata"<<endl;
        cout<<"6.Pecati semenski materijal"<<endl;
        cout<<"7.Pecati preparati"<<endl;
        cout<<"8.Pecati gjubrivo"<<endl;
        cout<<"9.Izlez"<<endl;
        test->Postavi_Podatoci();
    }

return 0;
}
