#include <iostream>
#include <cstring>
using namespace std;

class student{
    char imeprezime[30];
    int godina;
public:
    student(char i[]="Zoran Naumov", int g=1); // ??????????? ?? ????????? ?? ??????? ?????????
    void citaj() ;
    void pecati(void);
};

student::student(char i[], int g) {
        strcpy(imeprezime,i);
        godina=g;
        cout << "Povik na konstruktorot so pocetni parametri"<<endl;
}

void student::citaj() {
        cout << "Vnesi ime i prezime: ";
        gets(imeprezime);
        cout << "Vnesi godina na studii: ";
        cin >> godina;
    }
void student::pecati(void){
        cout << "Studentot "<<imeprezime
        << " e od " << godina << " godina. \n";
    }

main() {
    student st1; 
    student st2("Ana Nikolova", 1);
    st1.pecati();
    st2.pecati();
    return 0;
}

