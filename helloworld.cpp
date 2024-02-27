#include<iostream> //ogólna biblioteka, #include - dyrektywa
#include <string>
#define PI 3.14 //zmienna stała
//#include"" bibioteka własna
using namespace std;

int main() { //blok otwarcia
	std::cout<<"Hello world"<<std::endl;
	std::cout << 'a' << endl;
	cout << "Podaj tekst:\n";
	string tekst1, tekst2;//to nie jest standardowy typ danych, to jest klasa (w C tego nie ma)
	cin >> tekst1; cout << "Podano następujący tekst: " << tekst1;//<< operator przekierowania strumieniowego, cin wczytuje znaki do napotkania pustego pola
	cin >> tekst1 >> tekst2;
	cout << "Podano następujący tekst: " << tekst1 << " " << tekst2 << endl;
	string tekst;
	getline(cin, tekst);
	cout << "Podano następujący tekst: " << tekst << endl;
	int a = 10; //int b{ 12 } a) zmienne
	a++; // a+=1
	cout << a << endl; //11
	++a;
	cout << a << endl; //12      //Najpierw był język A, potem B, potem C ale nie było potem D tylko c++
	cout << a++ << endl;//12
	cout << a << endl; //13
	cout << ++a << endl;//14
	//Operatory matematyczne
	cout << 10 + 2 << endl; //12
	cout << 10 - 2 << endl; //8
	cout << 10 * 2 << endl; //20
	cout << 10 / 2 << endl; //5
	cout << 10 / 3 << endl; //3
	cout << 10 / 3. << endl; //3.33(3)
	cout << 10 % 2 << endl; //0
	cout << 11 % 6 << endl; //5
	cout << pow(2, 3) << endl;//8 - potęgowanie, pow zwraca wynik zmiennoprzecinkowy
	cout << sqrt(2) << endl; //1,14
	//Operatory relacyjne: && koniunkcja || alternatywa
	/*
	Komantarz wielolinijkowy
	*/
	// b) stałe
	const float pi = 3.1415;
	// pi=5
	cout << pi << ' ' << PI << endl;

	cout << "Podaj promien kola: ";
	int r;
	/*while (r <= 0) {
		cout << "Podano nieprawidłową wartość promienia" << endl;
	}*/
	/*cin >> r;
	cout << "Pole koła: " << PI * pow(r, 2) << endl;
	cout << "Obwód koła: " << 2 * PI * r << endl;*/
	/*int p = 0;
	int d = 0;
	int j = 0;
	cout << "Kupujesz bilet za 2 zl - 20 minut" << endl;
	cout << "Podaj nominal, ktorym placisz: "<<endl;
	int nominal = 0;
	cin >> nominal;
	nominal -= 2;
	while (nominal >= 5) {
		p++;
		nominal -= 5;
	};
	while (nominal >= 2) {
		d++;
		nominal -= 2;
	};
	while (nominal >= 1) {
		j++;
		nominal -= 1;
	};
	cout << "Reszta: " << p << " monet 5 zl " << d << " monet 2 zl " << j << " monet 1 zl";*/
	int p = 0;
	int d = 0;
	int j = 0;
	cout << "Kupujesz bilet za 2 zl - 20 minut" << endl;
	cout << "Podaj nominal, ktorym placisz: " << endl;
	int nominal = 0;
	cin >> nominal;
	nominal -= 2;
	p = nominal / 5;
	nominal -=5 * p;		//lepiej zrobić z modulo - modulo jest bardzo przydatne, np. na maturze z informatyki
	d = nominal / 2;		//trzeba użyć jak najmniej zmiennych (żeby tyle pamięci nie wykorzystywać)
	nominal -= 2 * d;
	j = nominal / 1;
	nominal -= 1 * j;
	cout << "Reszta: " << p << " monet 5 zl " << d << " monet 2 zl " << j << " monet 1 zl"<< endl;
	/*Instrukcja warunkowa
	if (warunek){
		instrukcja;
	}
	if (warunek){
		instruckcja1;
	}else 
		if (warunek){
			instruckja2;
		}else{

		}

	(warunek)?instrukcja1:instrukcja2
	*/
	int n;
	int m;
	cout << "Podaj 1 liczbe: " ;
	cin >> n;
	cout << "Podaj 2 liczbe: ";
	cin >> m;
	if (n > m) {
		cout << n << ">" << m;
	}
	else if (m > n) {
		cout << m << ">" << n;

	}else {
		cout << "Podane liczby sa takie same" << endl;
	 }

	bool ujemna;
	int liczba = 2;
	ujemna = (liczba < 0) ? true : false;
	return 0;
} //blok zamknięcia 
