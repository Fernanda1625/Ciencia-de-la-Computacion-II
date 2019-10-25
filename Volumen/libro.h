#include "volumen.h"

class Libro : public Volumen{
    private:
		char* autor;
		char* editorial;
	public:
		Libro(char* title, char* is, char* aut, char* edit,int numero);
		Libro(const Libro& lib);
		char* getAutor();
		char* getEditorial();
		virtual void mostrar);
		void setDatos(char* title, char* is, char* aut, char* edit,int numero);
		~Libro();
};
