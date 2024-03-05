#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(0)); //srand(time(NULL))
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
		cout << rand() << endl;
		i++;
	} while (i <= 100);

	return 0;
}
