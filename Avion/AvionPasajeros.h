#include "Avion.h"

class AvionPasajeros:public Avion{
	private:
		int duracion_minutos;
		double peso_equipaje;
 	public:
		AvionPasajeros(char* name, cha* dest, int duracion, double peso);
		void mostrar();
		~AvionPasajeros();
};
