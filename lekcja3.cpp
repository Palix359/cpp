#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(0)); //srand(time(NULL)) - to jest silnik renderujący
	/*int i = 10;
	do {
		cout << i-- << endl;
	} while (i >= 1);*/
	/*
	do {
		cout << i-- << endl;
	} while (i <= 1);
	*/
	
	//Zgadula <1;10> 3x
	
	//i = 1;
	//do {
	//	cout << rand()%10+1 << endl;
	//	// <a;b>
	//	// rand()%(b-a+1)+a
	//	i++;
	//} while (i <= 100);

	/* 
	Zadula
	1) komp 3
	u: 5 liczba jest za duża
	u: 1 liczba jest za mała
	u: 3 wygrana 
	*/
	/*short k = rand() % 10 + 1;
	int a = 0;
	int j = 3;
	do {
		cout << "Podaj liczbe: ";
		cin >> a;
		if (a == k) {
			cout << "Wygrales\n";
		}
		else if (a < k) {
			cout << "Podaj wieksza liczbe\n";
		}
		else {
			cout << "Podaj mniejsza liczbe\n";
		}
		j--;
	} while (a != k && j<0);*/
	/*int a = 0;
	int b = 0;
	int c = 0;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	do {
		c = a % b;
		a = b;
		b = c;
	} while (b > 0);
	cout << "NWD = " << a;*/

	/*
	Tablice danych w C++:
	a) statyczne C++
	b) dynamiczne C++
	c) kontenery STL, np. vecotr  C++

	Ad. a)
	typDanych indentyfikator[ilosc_elementow];
	*/
	/*int liczby[10] = {1,2,3};
	int len = sizeof(liczby) / sizeof(int);
	for (int i = 0; i < len; i++)
		cout << liczby[i] << '  ';
	cout << endl<<len;
	liczby[9] = 123;*/
	// const unsigned int N = 100;
	// int t[N];
	short n = 0;
	cin >> n;
	int tablica[100]

	return 0;
}
