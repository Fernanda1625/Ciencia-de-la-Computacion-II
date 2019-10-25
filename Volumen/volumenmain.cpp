#include <iostream>
#include <conio.h>
#include "biblioteca.h"
#include "revista.h"
#include "libro.h"
using namespace std;

int main(){
	Libro lib("Harry Potter ", "978847884452","J.K.Rowling", "Bloomsbury Publishing", 1000);
	Revista rev("Caretas", "9784273987489", 2019,254,10);
	Biblioteca bib;
	bib.añadirVolumen(&lib);
	bib.añadirVolumen(&rev);
	bib.mostrarDatos();
	getch();
	return 0;
}
