#include "volumen.h"

class Revista : public Volumen{
    private:
		int a�o;
		int numero_revista;
	public:
		Revista(char* t, char* i, int year, int numero_rev, int numero);
		int getA�o();
		int getNumeroRevista();
		virtual void mostrar();
		void setDatos(char* title, char* is, int year, int numero_rev, int numero);
		~Revista();
};
