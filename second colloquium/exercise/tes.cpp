#include <iostream>
#include <fstream>
using namespace std;
int AlphaNum(char k){
     int mala,golema,cifra;
	mala  =(k>='a') && (k<='z');
	golema=(k>='A') && (k<='Z');
	cifra =(k>='0') && (k<='9');
	return(mala || golema || cifra);
}
int main(int argc, char *argv[]){
    char ch;
    int brzborovi=0, vozbor=0;
	if(argc!=2) {
		cout << "Vnesete ime na datoteka \n";
		return 1;
	}
	ifstream in(argv[1]);
	if(!in) {
		cout << "Datotekata ne moze da se otvori.\n";
		return 1;
	
	}
	while((ch=in.get())!=EOF)  /* citaj znak po znak se do krajot */
	{
		if (AlphaNum(ch))
		{
			if (!vozbor) vozbor=1;
		}
		else
			if (vozbor) // ako do sega sme bile vo zbor - izbroj go 
			{
				vozbor=0;
				brzborovi++;
			}
	}
	if (vozbor) brzborovi++;  /* proveri da ne zavrsuva na bukva */
	cout << "Datotekata ima vkupno " << brzborovi<< " zborovi\n";
	in.close();
	return 0;
}


