#include <iostream>
#include "AvionPasajeros.h"
using namespace std;

AvionPasajeros::AvionPasajeros(char* name, char*dest, int duracion, double peso):Avion(name, dest){
	duracion_minutos=duracion;
	peso_equipaje=peso;
}

void AvionPasajeros::mostrar(){
	Avion::mostrar();
	cout<<"La duración del vuelo es: "<<duracion_minutos <<"minutos"<<endl;
	cout<<"El peso máximo de equipaje es:"<<peso_equipaje <<endl;
}

AvionPasajeros::~AvionPasajeros(){}
