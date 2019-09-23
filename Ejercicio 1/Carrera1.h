#include<string.h>
#include"Atleta.h"

class Carrera1{
    private:
		double distancia;
		Atleta * ganador;
	public:
		Carerra1(double dist, Atleta *win);
		double getDistancia();
		Atleta * getGanador();
};
