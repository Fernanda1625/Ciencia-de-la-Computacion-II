#include "revista.h"
#include <iostream>
using namespace std;

Revista::Revista(char* title, char* is, int year, int numero_rev, int numero):Volumen(title,is,numero){
	a�o=year;
	numero_revista=numero_rev;
}

int Revista::getA�o(){
	return a�o;
}

int Revista::getNumeroRevista(){
	return numero_revista;
}

void Revista::mostrar(){
	Volumen::mostrar();
	cout<<"El a�o de la revista es: "<<a�o<< ", el numero es: "<<numero_revista<<" y la cantidad de ejemplares es: "<<getNumeroEjemplares()<<endl;
}

void Revista::setDatos(char* title, char* is, int year, int numero_rev, int numero){
	Volumen::setDatos(title,is,numero);
	a�o=year;
	numero_revista=numero_rev;
}

Revista::~Revista(){}
