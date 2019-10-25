#include <string.h>
#include <iostream>
#include "volumen.h"
using namespace std;

Volumen::Volumen(char* title, char* is, int numero){
	titulo=new char[strlen(title)+1];
	strcpy(titulo, strlen(title)+1,title);
	isbn=new char[strlen(is)+1];
	strcpy(isbn, strlen(is)+1,is);
	numero_ejemplares=numero;
}

Volumen::Volumen(const Volumen& v){
	titulo=new char[strlen(v.titulo)+1];
	strcpy_s(titulo, strlen(v.titulo)+1,v.titulo);
	isbn=new char[strlen(v.isbn)+1];
	strcpy_s(isbn, strlen(v.isbn)+1,v.isbn);
	numero_ejemplares=v.numero_ejemplares;
}

char* Volumen::getTitulo(){
	return titulo;
}

char* Volumen::getIsbn(){
return isbn;
}

void Volumen::mostrar(){
	cout<<"El título es: "<<titulo<< " y el ISBN es: "<<isbn<<endl;
}

int Volumen::getNumeroEjemplares(){
	return numero_ejemplares;
}

void Volumen::setDatos(char* title, char* is, int numero){
	titulo=new char[strlen(title)+1];
	strcpy(titulo, strlen(title)+1,title);
	isbn=new char[strlen(is)+1];
	strcpy(isbn, strlen(is)+1,is);
	numero_ejemplares=numero;
}

Volumen::~Volumen(){}
