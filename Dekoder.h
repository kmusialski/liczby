#include <iostream>
#include <cmath>
#include <stdio.h>
#include <iostream> // std
#include <limits> // limit znakow
#include <map> // mapy
 // klawisz esc
// deklaracja

// deklaracja wskaznika
#ifndef DEKODER_DEKODER_H
#define DEKODER_DEKODER_H

using namespace std;

class Dekoder {

private:

	long long int liczba1;
	int *liczba;
	map<int, string> mapaB;
	map<int, string> mapaC;
	map<int, string> mapaD;
	map<int, string> mapaE;
	public:

	int get();
	void initMaps();
	void a();
	string convert();
	string dziesiatkiJednosci();
	string setki();
	string dtys();



};



#endif //TEST2_STRING_H
