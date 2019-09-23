#include<iostream>
#include<string.h>
#include"Atleta.h"
#include"Carrera.h"
#include"Carrera1.h"
#include"Carrera2.h"
using namespace std;

int main(){
	//Se crean dos objetos atleta y se imprime el atleta más rápido
	Atleta A1("Harry Potter", 340, "Inglés", 14.5);
	Atleta A2("Ron Weasley", 205, "Austriaco", 16.2);
	if (A1.getTiempo()>A2.getTiempo){
		cout<<"El atleta: "<<A1.getNombre()<<"\nes el más rápido."<<endl;
	}
	else {
		cout <<"El atleta: "<<A2.getNombre()<<"\nes el más rápido."<<endl;
	}
	
	//Se crea un objeto carrera y se imprime el ganador
	Carrera C(200, "Harry Potter");
	cout<<"El ganador es: "<<C.getGanador()<<endl;
	
	//Se crea un nuevo objeto atleta para usarlo en la clase Carrera1
	Atleta *A=new Atleta("Hermione Granger", 175, "Irlandés", 10.3)
	Carrera1 C1(200,A);
	Atleta *B=C1.getGanador();
	B->mostrarDatos();
	
	//Ahora usamos la clase Carrera2
	Carrera2 C2(200,3);
	C2.agregarAtleta(&a1);
	C2.agregarAtleta(&a2);
	C2.agregarAtleta(A);
	Atleta *C=C2.getGanador();
	r->mostrarDatos();

	return 0;
}
