#include "Dekoder.h"


bool checkmarkQ(long long int liczba1);

//int d,j,s,t,dt;



void Dekoder::a () { // przypisanie liczby do tablicy
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
map<int, string> h() { // mapa dziesiatek
                map<int, string> mapa4;
                mapa4[2] =  "dwadziescia";
                mapa4[3] = "trzydziesci";
                mapa4[4] =  "czterdziesci";
                mapa4[5] = "piecdziesiat";
                mapa4[6] =  "szescdziesiat";
                mapa4[7] = "siedemdziesiat";
                mapa4[8] =  "osiemdziesiat";
                mapa4[9] = "dziewiecdziesiat";
                return mapa4;
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


string Dekoder::dtys() {  // przypisywanie oznaczen dla liczb > 999
                if ( liczba[4] == 1) {

                               return mapaC[10 + liczba[3]] + " " + "tysiecy ";
                } else if ( liczba[4] > 1) {
                               if (liczba[3] != 0) {
                                               return mapaD[liczba[4]] + " " + mapaB[liczba[3]] + " " + "tysiecy ";
                               } else {
                                               return mapaD[liczba[4]]+ " " + "tysiecy ";
                               }
                }
                if (liczba[3] == 0) {
                               return "";
                } else if (liczba[3] == 1) {
                               return "tysiac ";
                } else if(liczba[3] >1 && liczba[3] <4) {
                               return mapaB[liczba[3]] + " tysiace ";
                } else {
                               return mapaB[liczba[3]] + " tysiecy ";
                }
}

string Dekoder::setki() { // przypisywanie oznaczen dla liczb > 99 < 999
                if (liczba[2] != 0) {

                               return mapaE[liczba[2]] + " ";
                }
                return "";
}
/*liczba[2] != 0 && (liczba[1],liczba[0]) <1) ||*/

string Dekoder::dziesiatkiJednosci() { // przypisywanie oznaczen dla liczb < 99
               if ( (liczba[3] !=0 && ((liczba[2],liczba[1],liczba[0] ) == 0)) || ( liczba[4] !=0 && ((liczba[3],liczba[2],liczba[1],liczba[0] ) == 0)) )
                   { // pozbycie sie zera dla sto tysiac itd
                               return "";
             }else {
                               if ( liczba[1] == 1) {
                                               return mapaC[10 + liczba[0]] + " ";
                               } else if (liczba[1] == 0) {
                                               return mapaB[liczba[0]];
                               } else {
                                               if (liczba[1] != 0 && liczba[0] != 0){
                                                               return mapaD[liczba[1]] + " " + mapaB[liczba[0]];
                                               } else {
                                                               return mapaD[liczba[1]];
                                               }
                               }
                }
}

void Dekoder::initMaps() { // inicjalizacja map dla poszczegolnych zmiennych
                mapaB =  b();
                mapaC =  c();
                mapaD =  h();
                mapaE =  e();
}
string Dekoder::convert() { // konwersja wyniku sumarycznego
                string result = "";
                result += dtys();
                result += setki();
                result += dziesiatkiJednosci();
                return result;
}


int Dekoder::get() { // wczytanie danej i sprawdzenie ograniczen

                initMaps();
                while (true) {
                               liczba = new int[5];
                               memset(liczba, 0, 5*sizeof(int)); // reset tablicy
                               if (GetAsyncKeyState(VK_ESCAPE)) {
 								return 0;
                               }
                               cout << "Podaj liczbe w zakresie 1-99999" << endl;
                               cin >> liczba1;
                               if (checkmarkQ(liczba1))
                               	{
                               			if (liczba1/100000 >= 1)
                              		 {
                                               cout<< " za duza liczba"<<endl;
                                               continue;
                              		 }
                            			else
                              		 {
                              				 a ();
											cout<< convert() <<endl;
                               		}
                               }else

							   {
								continue;
                               }
                           }

}
bool checkmarkQ(long long int liczba1)
{
	if (bool bCyfry = cin.good()) {
		return true;
	}
else
{
	cin.clear();
	cin.ignore( numeric_limits < streamsize >::max(), '\n' );
    return false;
}
}

