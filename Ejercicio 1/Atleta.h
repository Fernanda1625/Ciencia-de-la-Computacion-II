#include<string.h>

class Atleta{
	private:
		char* nombre;
		int numero;
		char* nacionalidad;
		double tiempo;
	public:
		Atleta(char* n=NULL, int nro=0, char* nat=NULL, double t=0.0);
		char* getNombre();
		int getNumero();
		char* getNacionalidad();
		double getTiempo();
		void setNombre (char* name);
		void setNumero(int nro);
		void setNacionalidad(char* nat);
		void setTiempo(double t);
		void mostrarDatos();
};
