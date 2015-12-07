#include "Dekoder.h"


int *liczba;
map<int, string> mapaB;
map<int, string> mapaC;
map<int, string> mapaD;
map<int, string> mapaE;
 
void Dekoder::a (long long int liczba1) { // przypisanie liczby do tablicy
                int licznik = 0;
                do {
                               int b = liczba1 % 10;
                               liczba1 = liczba1 / 10;
                               liczba[ licznik ] = b;
                               licznik++;
                } while (liczba1 != 0);
}
 
map<int, string> b() { // mapa jednosci/ tysiecy
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
                return mapa1;
}
map<int, string> c() { // mapa nastek / tysiecy
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
                return mapa2;
}
map<int, string> d() { // mapa dziesiatek
                map<int, string> mapa2;
                mapa2[2] =  "dwadziescia";
                mapa2[3] = "trzydziesci";
                mapa2[4] =  "czterdziesci";
                mapa2[5] = "piecdziesiat";
                mapa2[6] =  "szescdziesiat";
                mapa2[7] = "siedemdziesiat";
                mapa2[8] =  "osiemdziesiat";
                mapa2[9] = "dziewiecdziesiat";
                return mapa2;
}
map<int, string> e() {  // mapa setek
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
                return mapa3;
}
 
 
string Dekoder::dtys(int dt, int t ) {  // przypisywanie oznaczen dla liczb > 999
                if ( dt == 1) {
                              
                               return mapaC[10 + t] + " " + "tysiecy ";
                } else if ( dt > 1) {
                               if (t != 0) {
                                               return mapaD[dt] + " " + mapaB[t] + " " + "tysiecy ";
                               } else {
                                               return mapaD[dt]+ " " + "tysiecy ";
                               }
                }
                if (t == 0) {
                               return "";
                } else if (t == 1) {
                               return "tysiac ";
                } else if(t >1 && t <4) {
                               return mapaB[t] + " tysiace ";
                } else {
                               return mapaB[t] + " tysiecy ";
                }
}
 
string Dekoder::setki(int s) { // przypisywanie oznaczen dla liczb > 99 < 999
                if (s != 0) {
                               
                               return mapaE[s] + " ";
                }
                return "";
}
 
 
string Dekoder::dziesiatkiJednosci(int d, int j, int s, int t, int dt) { // przypisywanie oznaczen dla liczb < 99
                if( (s != 0 && ((d,j) == 0)) ||( t !=0 && ((s,d,j ) == 0)) || ( dt !=0 && ((t,s,d,j ) == 0))) { // pozbycie sie zera dla sto tysiac itd
                               return "";
                } else {
                               if ( d == 1) {
                                               return mapaC[10 + j] + " ";
                               } else if (d == 0) {
                                               return mapaB[j];
                               } else {
                                               if (j != 0) {
                                                               return mapaD[d] + " " + mapaB[j];
                                               } else {
                                                               return mapaD[d];
                                               }
                               }
                }
}
 
void Dekoder::initMaps() { // inicjalizacja map dla poszczegolnych zmiennych
                mapaB =  b(); 
                mapaC =  c();
                mapaD =  d();
                mapaE =  e();
}
string Dekoder::convert() { // konwersja wyniku sumarycznego
                string result = "";
                result += dtys(liczba[4],liczba[3]);
                result += setki(liczba[2]);
                result += dziesiatkiJednosci(liczba[1], liczba[0],liczba[2], liczba[3],liczba[4]);
                return result;
}
 
 
int Dekoder::get() { // wczytanie danej i sprawdzenie ograniczen
                long long int liczba1;
                initMaps();
                while (true) {
                               liczba = new int[5];
                               memset(liczba, 0, 5*sizeof(int)); // reset tablicy 
                               if (GetAsyncKeyState(VK_ESCAPE)) {
 								return 0;
                               }
                               cout << "Podaj liczbe w zakresie 1-99999" << endl;
                               cin >> liczba1;
                               if (bool Nieznak = cin.good())
                               {
                               	if (liczba1/100000 >= 1)
                               {
                                               cout<< " za duza liczba"<<endl;
                                               continue;
                               }
                               else
                               {
                               a (liczba1);
                               cout<< convert() <<endl;
                               }
                               } else
                               {
                            	cin.clear();
								cin.ignore( numeric_limits < streamsize >::max(), '\n' ); // sprawdzenie strumienia
								continue;
                               }
                           }
                               
}
