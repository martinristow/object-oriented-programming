#include <iostream>
#include <string.h>
using namespace std;

class student{
    char imeprezime[30];
    int godina;
public:
    student(){cout << "Povik na default konstruktorot"<<endl;}
    student(char i[], int g);
    void citaj() ;
    void pecati(void);
    ~student(){cout << "Povik na destruktorot"<<endl; } // ?????????? ?? ???????
};

student::student(char i[], int g){
        strcpy(imeprezime,i);
        godina=g;
        cout << "Povik na vtoriot konstruktor"<<endl;
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
    {student st("Ana Nikolova", 1), st1;
    st.pecati();}
    return 0;             
}

