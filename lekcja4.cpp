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
	int liczba1, liczba2;
	cout << "Podaj 2 liczby\n";
	cin >> liczba1 >> liczba2;
	cout <<liczba1 << ' ' << liczba2 << endl;
	zamien1(liczba1, liczba2);
	cout << liczba1 << ' ' << liczba2;
	potrojenie(10);
	cout << "Podaj liczbe:\n";
	int wynik = potrojenie1(30) + 1;
	cout << wynik;
	int a; cin >> a; //parametr aktualny
	potrojenie(a);
	
	
	
	return 0;
}
void potrojenie(int liczba) {
	cout << liczba * 3;
}
