#include <iostream>
#include <cmath>
#include <stdio.h>
#include <iostream> // std
#include <limits> // limit znakow
#include <map> // mapy
#include <windows.h> // klawisz esc
// deklaracja 
 
// deklaracja wskaznika
#ifndef DEKODER_DEKODER_H
#define DEKODER_DEKODER_H

using namespace std;

class Dekoder {

private:

public:
	
	int get();
	void initMaps();
	void a(long long int liczba1);
	string convert();
	string dziesiatkiJednosci(int d, int j, int s, int t, int dt);
	string setki(int s);
	string dtys(int dt, int t );
	
	
	
};



#endif //TEST2_STRING_H
