#include "Avion.h"
class AvionHidratante:public Avion{
	private:
		int litros_agua;
		int capacidad;
	public:
		AvionHidratante(char* name,char* dest,int litros);
		void descargarAgua(int litros);
		void descargarAgua();
		void mostrar();
		~AvionHidratante();
};
