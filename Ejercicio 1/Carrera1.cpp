#include <string.h>
#include"Carrera1.h"

Carrera1::Carrera1 (double d, Atleta *A){
	distancia=d;
	ganador=A;
}
double Carrera1::getDistancia(){
	return distancia;
}
Atleta* Carrera1::getGanador(){
	return ganador;
}
