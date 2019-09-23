#include"Carriage.h"

bool Carriage::getAsiento(int ind) {
	return asientos[ind];
}
bool Carriage::getPrimera(){
	return primera;
}
Carriage::Carriage(bool prim) {
	primera = prim;
	for(int i = 0; i < 40; i++) {
		asientos[i] = 0;
	}
}
void Carriage::setPrimera(bool p){
	primera=p;
}
void Carriage::ocupar() {
	double probabilidad = primera ? 0.1 : 0.4;
	for(int i = 0; i < 40; i++) {
		asientos[i] = double(rand())/RAND_MAX < probabilidad;
	}
}
