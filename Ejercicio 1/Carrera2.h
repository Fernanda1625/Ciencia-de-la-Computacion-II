#include<Atleta.h>

class Carrera2{
	private:
		double distancia;
		Atleta** competidores;
		int cantAtletas;
		int indice;
	public:
		Carrera2(int dist, int cantidad);
		double getDistancia();
		Atleta *getGanador();
		int getCantAtletas() ;
		void agregarAtleta(Atleta* A);
};
