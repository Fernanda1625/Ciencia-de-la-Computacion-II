#include "volumen.h"

class Biblioteca{
    private:
		static const int MAX=100;
		Volumen* volumenes[MAX];
		int inicial;
	public:
	Biblioteca();
	void mostrar();
	bool a�adirVolumen(Volumen* v);
	~Biblioteca();
};
