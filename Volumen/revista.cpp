#include "revista.h"
#include <iostream>
using namespace std;

Revista::Revista(char* title, char* is, int year, int numero_rev, int numero):Volumen(title,is,numero){
	año=year;
	numero_revista=numero_rev;
}

int Revista::getAño(){
	return año;
}

int Revista::getNumeroRevista(){
	return numero_revista;
}

void Revista::mostrar(){
	Volumen::mostrar();
	cout<<"El año de la revista es: "<<año<< ", el numero es: "<<numero_revista<<" y la cantidad de ejemplares es: "<<getNumeroEjemplares()<<endl;
}

void Revista::setDatos(char* title, char* is, int year, int numero_rev, int numero){
	Volumen::setDatos(title,is,numero);
	año=year;
	numero_revista=numero_rev;
}

Revista::~Revista(){}
