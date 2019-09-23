#include<string.h>

class Carerra{
	private:
		double distancia;
		char* ganador;
	public:
		Carerra(double dist, char*win);
		double getDistancia();
		char* getGanador();
};
