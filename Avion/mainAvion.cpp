#include <iostream>
#include <conio.h>
#include "AvionHidratante.h"
#include "AvionPasajeros.h"
using namespace std;

int main(){
	AvionPasajeros ap("AZ19B2","Londres",2400, 270.5);
	AvionHidratante ah("BT3533P8","Bariloche",500);
	ap.mostrar();
	ah.mostrar();
	ah.descargarAgua(300);
	ah.mostrar();
	ah.descargarAgua();
	ah.mostrar();
    getch();
	return 0;
}
