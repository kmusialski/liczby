
#include<cstdlib>
#include "Dekoder.h"
using namespace std;

Dekoder createDekoder(long long int liczba1);


int main() {
	
	Dekoder zmienna = createDekoder(long long int liczba1);

}

Dekoder createDekoder(long long int liczba1){

	Dekoder dekoder;
	dekoder.get();
	dekoder.a(long long int liczba1);
	dekoder.initMaps();
	dekoder.dziesiatkiJednosci(d,j,s,t,dt);
	dekoder.setki(s);
	dekoder.dtys(dt,t);
	dekoder.convert();
	
}

////#include<iostream>
//
//#include "Fibbo.h"
//
//Fibbo createFibbo();
////using namespace std;
// 
//int main()
//{
//Fibbo zmienna = createFibbo();
//}
//
//Fibbo createFibbo(){
//	Fibbo fibbo;
//	fibbo.setfibbo();
//	fibbo.fibonacci();
//	
//}
