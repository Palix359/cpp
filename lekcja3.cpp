#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(0)); //srand(time(NULL)) - to jest silnik renderujący
	int i = 10;
	do {
		cout << i-- << endl;
	} while (i >= 1);
	/*
	do {
		cout << i-- << endl;
	} while (i <= 1);
	*/
	
	//Zgadula <1;10> 3x
	
	i = 1;
	do {
		cout << rand()%10+1 << endl;
		// <a;b>
		// rand()%(b-a+1)+a
		i++;
	} while (i <= 100);

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

	return 0;
	}
