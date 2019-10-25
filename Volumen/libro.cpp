#include "libro.h"
#include <iostream>
using namespace std;

Libro::Libro(char* title, char* is, char* aut, char* edit,int numero):Volumen(title,is,numero){
	autor=new char[strlen(aut)+1];
	strcpy(autor, strlen(aut)+1,aut);
	editorial=new char[strlen(edit)+1];
	strcpy(editorial, strlen(edit)+1,edit);
}
Libro::Libro(const Libro& lib):Volumen(l){
	autor=new char[strlen(l.autor)+1];
	strcpy(autor, strlen(l.autor)+1,l.autor);
	editorial=new char[strlen(l.editorial)+1];
	strcpy(editorial, strlen(l.editorial)+1,l.editorial);
}

char* Libro::getAutor(){
	return autor;
}

char* Libro::getEditorial(){
	return editorial;
}
void Libro::mostrar(){
	Volumen::mostrar();
	cout<<"El autor del libro es: "<<autor<< ", la editorial: "<<editorial<<" y la cantidad de volúmenes: "<<getNroEjemplares()<<endl;
}

void Libro::setDatos(char* title, char* is, char* aut, char* edit,int numero){
	Volumen::setDatos(title,is,numero);
	autor=new char[strlen(aut)+1];
	strcpy(autor, strlen(aut)+1,aut);
	editorial=new char[strlen(edit)+1];
	strcpy(editorial, strlen(edit)+1,edit);
}

Libro::~Libro(){}
