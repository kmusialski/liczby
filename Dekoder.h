#include <iostream>
#include <cmath>
#include <stdio.h>
#include <limits>
#include <cstdlib>
#include <string>
#include <map>

#ifndef DEKODER_DEKODER_H
#define DEKODER_DEKODER_H

using namespace std;

class Dekoder {

private:

public:
	
	
	void table (long long int liczba1);
	void initMaps();
	string dziesiatkiJednosci();
	string setki();
	string tys();
	string convert();
};



#endif //TEST2_STRING_H
