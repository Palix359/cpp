#include <iostream>
using namespace std;

int main() {
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
	for (int i = 0; i < n; i++)
		tab[i] = i;
	for (int i = 0; i < n; i++)
		cout << tab[i] << ' ';
	delete[] tab;
	
	
	return 0;
}
