#include<iostream>
#include"Carrera.h"
#include<string.h>

Carrera::Carrera(double dist, char* win){
	distancia=dist;
	ganador=new char[strlen(win) + 1];
	strcpy(ganador, win);
}
double Carrera::getDistancia(){
	return distancia;
}
char* Carrera::getGanador(){
	return ganador;
}
