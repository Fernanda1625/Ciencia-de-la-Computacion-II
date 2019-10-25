#include <iostream>
#include <string.h>
#include "Avion.h"
using namespace std;

Avion::Avion(char* name, char* dest){
	nombre_vuelo=new char[strlen(name)+1];
	strcpy(nombre_vuelo,strlen(name)+1),name);
	destino=new char[strlen(dest)+1];
	strcpy(destino,strlen(dest)+1,dest);
}

char*Avion::getNombreVuelo(){
	return nombre_vuelo;
}

char*Avion::getDestino(){
	return destino;
}

void Avion::setNombreVuelo(char* name){
	delete[] nombre_vuelo;
	nombre_vuelo=new char[strlen(name)+1];
	strcpy(nombre_vuelo,strlen(name)+1,name);
}

void Avion::setDestino(char* dest){
    delete[] destino;
	destino=new char[strlen(dest)+1];
	strcpy(destino,strlen(dest))+1,dest);
}

void Avion::mostrar(){
	cout<<"El nombre del vuelo es: "<< nombre_vuelo << "y el destino es: " << destino << endl;
}

Avion::~~Avion(){}
