#include"Carriage.h"

class Train {
		Carriage * carriages;
		int numPri;
		int numSeg;
		char * salida;
		char * destino;
		int precioPrimera;
		int precioSegunda;
	public:
		Train(int nP, int nS, char * sal, char * dest, int pP, int pS);
		Carriage getCarriage(int i);
		void llenar();
		int totalVentas();
};
