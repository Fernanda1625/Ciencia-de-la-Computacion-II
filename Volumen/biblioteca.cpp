#include "biblioteca.h"

Biblioteca::Biblioteca(){
	inicial=0;
}

void Biblioteca::mostrar(){
	for(int j=0;j<inicial;j++)
	volumenes[j]->mostrar();
}

bool Biblioteca::añadirVolumen(Volumen* v){
	bool agregado=false;
	if(inicial<MAX){
		volumenes[inicial]=v;
		inicial++;
		agregado=true;
	}
	return agregado;
}

Biblioteca::~Biblioteca(){}
