#include "Dekoder.h"

int *liczba;
map<int, string> mapaB;
map<int, string> mapaC;
map<int, string> mapaD;
map<int, string> mapaE;

void Dekoder::table (/*long long int liczba1*/) {
	int licznik = 0;
	do {
		int b = liczba1 % 10;
		liczba1 = liczba1 / 10;
		liczba[ licznik ] = b;
		licznik++;
	} while (liczba1 != 0);
	//return 1;
	//            return liczba;
}

map<int, string> b() {
	map<int, string> mapa1;
	mapa1[0] = "zero";
	mapa1[1] =  "jeden";
	mapa1[2] = "dwa";
	mapa1[3] =  "trzy";
	mapa1[4] = "cztery";
	mapa1[5] =  "piec";
	mapa1[6] = "szesc";
	mapa1[7] =  "siedem";
	mapa1[8] = "osiem";
	mapa1[9] = "dziewiec";
	//cout << mapa1[c];
	return mapa1;
}
map<int, string> c() {
	map<int, string> mapa2;
	mapa2[10] = "dziesiec";
	mapa2[11] =  "jedenascie";
	mapa2[12] = "dwanascie";
	mapa2[13] =  "trzynascie";
	mapa2[14] = "czternascie";
	mapa2[15] =  "pietnascie";
	mapa2[16] = "szesnascie";
	mapa2[17] =  "siedemnascie";
	mapa2[18] = "osiemnascie";
	mapa2[19] = "dziewietnascie";
	//cout << mapa2[c];
	return mapa2;
}
map<int, string> d() {
	map<int, string> mapa2;
	mapa2[2] =  "dwadziescia";
	mapa2[3] = "trzydziesci";
	mapa2[4] =  "czterdziesci";
	mapa2[5] = "piecdziesiat";
	mapa2[6] =  "szescdziesiat";
	mapa2[7] = "siedemdziesiat";
	mapa2[8] =  "osiemdziesiat";
	mapa2[9] = "dziewiecdziesiat";
	//cout << mapa2[c];
	return mapa2;
}
map<int, string> e() {
	map<int, string> mapa3;
	mapa3[1] = "sto";
	mapa3[2] =  "dwiescie";
	mapa3[3] = "trzysta";
	mapa3[4] =  "czterysta";
	mapa3[5] = "piecset";
	mapa3[6] =  "szescset";
	mapa3[7] = "siedemset";
	mapa3[8] =  "osiemset";
	mapa3[9] = "dziewiecset";
	//cout << mapa3[c];
	return mapa3;
}
string Dekoder::tys(/*int cyfraTysiecy*/ ) {

	if (cyfraTysiecy == 0) {
		return "";
	} else if (cyfraTysiecy == 1) {
		return "tysiac ";
	} else if(cyfraTysiecy <= 4) {
		return mapaB[cyfraTysiecy] + " tysiace ";
	} else {
		return mapaB[cyfraTysiecy] + " tysiecy ";
	}

}

string Dekoder::setki(/*int s*/) {
	if (s != 0) { // czytanie setek
		return mapaE[s] + " ";
	}
	return "";
}


string Dekoder::dziesiatkiJednosci(/*int d, int j*/) {

	if ( d == 1) { // czytanie 10-19
		return mapaC[10 + j] + " ";
	} else { // czytanie dziesiatek
		return mapaD[d] + " " + mapaB[j];
	}
}

void Dekoder::initMaps() {
	mapaB =  b();
	mapaC =  c();
	mapaD =  d();
	mapaE =  e();
}


string Dekoder::convert() {
	string result = "";
	result += tys(liczba[3]);
	result += setki(liczba[2]);
	result += dziesiatkiJednosci(liczba[1], liczba[0]);
	return result;
}

