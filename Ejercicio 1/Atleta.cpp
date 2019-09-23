#include<iostream>
#include<string.h>
#include"Atleta.h"
using namespace std;

Atleta::Atleta(char* name, int nro, char* nat, double t){
	nombre=new char[strlen(name) + 1];
	strcpy(nombre, n);
	numero=nro;
	nacionalidad=new char[strlen(nat)+1];
	strcpy(nacionalidad, nat);
	tiempo=t;
}
char* Atleta::getNombre(){
	return nombre;
}
int Atleta::getNumero(){
	return numero;
}
char* Atleta::getNacionalidad(){
	return nacionalidad;
}
double Atleta::getTiempo(){
	return tiempo;
}
void Atleta::setNombre(char* name){
	if(nombre==NULL){
	nombre=new char[strlen(name) + 1];
	strcpy(nombre, name);
	}
}
void Atleta::setNumero(int nro){
	numero=nro;
}
void Atleta::setNacionalidad(char* nat){
	if(nacionalidad==NULL){
	nacionalidad=new char[strlen(nat)+1];
	strcpy(nacionalidad, nat);
	}
}
void Atleta::setTiempo(double t){
	tiempo=t;
}
void Atleta::mostrarDatos(){
	cout<<"Nombre Atleta: "<<nombre<<"\nNúmero: "<<numero<<"\nNacionalidad: "<<nacionalidad<<"\nTiempo: "<<tiempo<<endl;
}
