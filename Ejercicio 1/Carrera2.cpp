#include "Carrera2.h"

Carrera2::Carrera2(double dist, int cantidad){
	distancia=dist;
	cantAtletas=cantidad;
	competidores=new Atleta* [cantidad];
	indice=0;
}
double Carrera2::getDistancia(){
	return distancia;
}
int Carrera2::getCantAtletas(){
	return cantAtletas;
}
Atleta* Carrera2::getGanador(){
	double t=competidores[0]->getTiempo();
	double taux;
	int iaux;
	for(int i=1;i<cantAtletas;i++){
		taux=competidores[i]->getTiempo();
		if(taux<t){
			t=taux;
			iaux=i;
		}
	}
	return competidores[iaux];
}
void Carrera2::agregarAtleta(Atleta* A)
{
	if(indice<cantAtletas){
		competidores[indice]=A;
	indice++;
	}
}
