#include"Train.h"

Train::Train(int nP, int nS, char * sal, char * dest, int pP, int pS):
	numPri(nP), numSeg(nS), salida(sal), destino(dest), precioPrimera(pP),precioSegunda(pS) {
		carriages = new Carriage[nP + nS];
		for(int i = 0; i < nP + nS; i++){
			carriages[i].setPrimera(i < nP);
		}
}
int Train::totalVentas() {
	int acum = 0;
	for(int i = 0; i < numPri + numSeg; i++){
		if (carriages[i].getPrimera()){
			for(int j = 0; j < 40; j++){
				acum += carriages[i].getAsiento(j) * precioPrimera;
			}
		}
		else {
			for(int j = 0; j < 40; j++){
				acum += carriages[i].getAsiento(j) * precioSegunda;
			}
		}
	}
	return acum;
}
void Train::llenar() {
	for(int i = 0; i < numPri + numSeg; i++){
		carriages[i].ocupar();
	}
}
