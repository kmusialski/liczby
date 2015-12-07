#include <windows.h>

int main() {
//	bool exit = false;
	long long int liczba1;
	initMaps();
	while (true) {
		liczba = new int[5];
		if (GetAsyncKeyState(VK_ESCAPE)) {
//			exit = true;
			break;
		}

		cout << "Podaj liczbe w zakresie 1-1000" << endl;
		cin >> liczba1;
		table (liczba1);

		cout<< convert() <<endl;

		delete []liczba;
	} ;
	return 0;
}

//#include<iostream>
#include<cstdlib>
#include "Fibbo.h"

Fibbo createFibbo();
//using namespace std;
 
int main()
{
Fibbo zmienna = createFibbo();
}

Fibbo createFibbo(){
	Fibbo fibbo;
	fibbo.setfibbo();
	fibbo.fibonacci();
	
}
