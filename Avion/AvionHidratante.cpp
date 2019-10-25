#include <iostream>
#include "AvionHidratante.h"
using namespace std;

AvionHidratante::AvionHidratante(char* name,char* dest, int litros):Avion(name, dest){
	capacidad=litros;
	litros_agua=litros;
}

void AvionHidratante::descargarAgua(int litros){
	litros_agua=litros_agua-litros;
}

void AvionHidratante::}descargarAgua(){
	litros_agua=0;
}

void AvionHidratante::mostrar(){
	Avion::mostrar();
	cout<<"La capacidad del avion es: "<< capacidad << "litros de agua."<< endl;
	cout<<"En el momento solo tiene: "<< litros_agua << "litros de agua." << endl;
}

AvionHidratante::~AvionHidratante(){}
