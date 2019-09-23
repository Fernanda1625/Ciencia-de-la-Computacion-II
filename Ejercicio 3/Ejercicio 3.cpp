#include <iostream>
using namespace std;

int main(){
	int i;
	int *pi;
	double d;
	double *pd;
	//Hacer que las variables tipo puntero apunten a las zonas de memoria de las variables normales.
	pi=&i;
	pd=&d;
	//Inicializar valores mediante asignaciones a las variables normales.
	i=2;
	d=6.4;
	//Mostrar los valores asignados, utilizando las variables normales y las variables tipo puntero.
	cout<<"i= "<<i<<endl;
	cout<<"d= "<<d<<endl;
	cout<<"i= "<<*pi<<endl;
	cout<<"d= "<<*pd<<endl;
	//Cambiar los valores utilizando las variables tipo puntero.
	*pi=4;
	*pd=8.3;
	//Volver a mostrar los valores asignados, utilizando las variables normales y las variables tipo puntero
	cout<<"i= "<<i<<endl;
	cout<<"d= "<<d<<endl;
	cout<<"i= "<<*pi<<endl;
	cout<<"d= "<<*pd<<endl;

	return 0;
}
