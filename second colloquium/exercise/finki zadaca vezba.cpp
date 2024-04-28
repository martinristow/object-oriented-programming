#include <iostream>
#include <cstring>
using namespace std;

class Kurs{
	char ime_na_kurs[15];
	int broj_na_krediti;
};

class Student{
	int index_na_student;
	int n;
	int *niza=new int[ n+1];
};

class Predavac{
	char *predavac[15];
};
