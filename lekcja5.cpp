#include <iostream>
using namespace std;

enum Plec { kobieta, mezczyzna=123, inny };
enum Odpowiedz { nie, tak, no=0, yes=1 };
typedef unsigned long long Liczba;

unsigned long long liczba1;
int main() {
	Liczba liczba = 123;
	Plec uczen1 = inny;
	cout << uczen1 << endl;;
	int a = 123;
	int* wsk=&a;
	cout << a << ' ' << &a << endl;
	cout << wsk << endl;
	*wsk = 321;
	int b = 997;
	wsk = &b;
	cout << a << endl;
	cout << *wsk << endl;
	//tabl. dynamiczne
	cout << "Ile liczb chcesz przechowac?\n";
	int n; cin >> n;
	int* tab = new int[n];
	/*for (int i = 0; i < n; i++)
		tab[i] = i;
	for (int i = 0; i < n; i++)
		cout << tab[i] << ' ';*/
	delete[] tab;
	
	//sito Eratostenesa
	bool* sito = new bool[n + 1];
	for (int i = 2; i < n; i++)
		sito[i] = true;
	int primeNumber = 2;
	while (primeNumber <= sqrt(n)) {
		while (sito[primeNumber] == false) primeNumber++;
		for (int i = primeNumber * primeNumber; i < n; i += primeNumber)
			if (sito[i] == true)
				sito[i] = false;
		primeNumber ++;
	}
	for (int i = 0; i < n + 1; i++)
		if (sito[i] == true)
			cout <<'\n' << i << ' ';
	delete[] sito;
	int a;
	int tablica[5];
	for (int i = 0; i < 5; i++)
		tablica[i] = rand() % 10 + 1;
	int j = 4;
	int c = 1;
	while (j != 0) {
		a = tablica[c];
		for (int x = 1; x < j; x++)
			if (a > tablica[x])

	}
	return 0;
}
