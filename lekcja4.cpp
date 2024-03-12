#include <iostream>
using namespace std;

/*
Funckje w C/C++:
a) selektory
b) modyfikatory

Ad. a)
void indentyfikator(lista parametrów formalnych){}
void potrojenie(lista parametrów formalnych){}

Ad. b)
typDanych indentyfikator(lista parametrów formalnych) - musi być potem uzyta w jakimś poleceniu
*/
void potrojenie(int); //deklaracja
long long potrojenie1(int liczba) {
	return liczba * 3;
}
void zamien(int a, int b) {
	int kont = a;
	a = b;
	b = kont;
	cout << a << ' ' << b << endl;
}
void zamien1(int& a, int& b) {
	int kont = a;
	a = b;
	b = kont;
	cout << a << ' ' << b << endl;
}
int main() {
	srand(time(0));
	//int liczba1, liczba2;
	//cout << "Podaj 2 liczby\n";
	//cin >> liczba1 >> liczba2;
	//cout <<liczba1 << ' ' << liczba2 << endl;
	//zamien1(liczba1, liczba2);
	//cout << liczba1 << ' ' << liczba2;
	//potrojenie(10);
	//cout << "Podaj liczbe:\n";
	//int wynik = potrojenie1(30) + 1;
	//cout << wynik;
	//int a; cin >> a; //parametr aktualny
	//potrojenie(a);
	const unsigned int N = 100;
	int liczby[N];
	int a = 1;
	int b = 2;
	int l1 = 0, l2 = 0;
	short c = 100;
	int k = 0;
	for (int i = 0; i < N; i++)
		liczby[i] = rand();
	for (int a = 0; a < 100; a++) {
		cout << liczby[a] << ' ';
	}
	for (c; c > 0; c--) {
		if (k == 0)
			break;
		k = 0;
		for (short n = c - 1; n > 0; n--) {
			if (liczby[a] > liczby[b]) {
				l1 = liczby[a];
				l2 = liczby[b];
				zamien1(l1, l2);
				liczby[a] = l2;
				liczby[b] = l1;
				k++;
			}
			a++; b++;
		}
	}
	cout << "\n" << "Oto posortowane liczby:" << endl;;
	for (int a = 0; a < 100; a++) {
		cout << liczby[a] << ' ';
	}
	return 0;
}
void potrojenie(int liczba) {
	cout << liczba * 3;
}
