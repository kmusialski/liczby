#include <windows.h>
#include<cstdlib>
#include "Dekoder.h"
#include <iostream>
using namespace std;

Dekoder createDekoder();

int main() {

	
	Dekoder zmienna = createDekoder();
	
}

Dekoder createDekoder(){

	Dekoder dekoder;
	dekoder.get();
	dekoder.a();
	dekoder.initMaps();
	dekoder.dziesiatkiJednosci();
	dekoder.setki();
	dekoder.dtys();
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
