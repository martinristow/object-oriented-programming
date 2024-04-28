#include <iostream>
#include <cstring>
using namespace std;
class Lice{
	char* ime;
	char* emb;
public:
	void set (char*, char*);
	void pecati() const;
	~Lice(){ delete [] ime; delete [] emb; }
}; 
void Lice::set (char *str, char *num){
	ime=new char[strlen(str)+1];   strcpy(ime, str);
	emb=new char[14];	strcpy(emb, num);
}
void Lice::pecati() const{
	cout<<"Ime:"<<ime<<endl;
	cout<<"EMB:"<<emb<<endl;
}
class Student:Lice{
	long brindex;
	double sruspeh;
public:
	void setStudent(char*, char*, long, double);
	void pecatiStudent() const;
}; 
void Student::setStudent(char *str, char *num, long brind, double srusp){
	set(str, num);
	brindex=brind;
	sruspeh=srusp;
}
void Student::pecatiStudent() const{
	pecati();
	cout<<"broj na index:"<<brindex<<endl;
	cout<<"uspeh:"<<sruspeh<<endl;
} 
int main()
{
	Student stud;
	stud.setStudent("Aleksandar Ivanovski", "2305984455040", 10110, 9.2);
	stud.pecatiStudent();
	return 0;
} 

