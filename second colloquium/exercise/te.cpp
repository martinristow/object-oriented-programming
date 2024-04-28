#include <iostream>
#include <fstream>
using namespace std;
struct ClientData{
	int smetka;	
	char ime[15];	
	char prezime[10];	
	float sostojba;	
};

void Create(ofstream& f){
	ClientData client={0, "", "", 0.0};
	for (int i=0; i<=149; i++)
	  f.write(reinterpret_cast<char*>(&client), sizeof(ClientData));
	f.close();
} 

void Modify(ofstream& f){
	cout<<"Vnesi broj na smetka\n"
	       <<"(od 1 do 150, 0 za kraj)\n?";
               ClientData client;
	cin>>client.smetka;
	while(client.smetka>=1 && client.smetka<=150)	{
	    cout<<"Vnesi ime, prezime i sostojba\n?";
                   cin>>client.ime>>client.prezime>>client.sostojba;
	    f.seekp((client.smetka-1)*sizeof(ClientData));
	    f.write(reinterpret_cast< char*>(&client), sizeof(ClientData));
	    cout<<"Vnesi broj na smetka\n?";
	    cin>>client.smetka;
	}
	f.close();
}

int main()
{
	ofstream f1("rabotnici.dat", ios::out);
	if(!f1)	{
		cerr<<"Datotekata ne moze da se otvori!\n";
		return 1;
	}
	Create(f1);
	f1.open("rabotnici.dat", ios::ate);
               if(!f1)	{
		cerr<<"Datotekata ne moze da se otvori!\n";
		return 1;
	}
	Modify(f1);
	return 0;
 }


