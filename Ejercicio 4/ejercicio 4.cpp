#include<iostream>
#include<conio.h>
using namespace std;

//prototipos de funciones
void Buscar(int**, int, int);
void pedirDatos();
void mostrarDatos(int **, int, int);

int **punteroMatriz, nF,nC;

int main(){
	pedirDatos();
	mostrarDatos(punteroMatriz,nF,nC);
	Buscar(punteroMatriz, nF, nC);
	//eliminando la memoria reservada
	for(int i=0;i<nF;i++){
		delete[] punteroMatriz[i];
	}
	delete[] punteroMatriz;

	getch();
	return 0;
}


void pedirDatos(){
	cout<<"Número de filas: " <<endl;
	cin>>nF;
	cout<<"Número de columnas: "<<endl;
	cin>>nC;
	if(nF>20 || nC>20) {
		cout<< "La matriz maxima es de 20x20."<<endl;
	}
	else{
		//Reservar memoria para la matriz dinámica
		punteroMatriz=new int *[nF];
		for(int i=0;i<nF;i++){
			punteroMatriz[i]=new int[nC];
		}

		//Pedir datos y guardarlos en la matriz
		cout<<"Digite los elementos de la matriz"<<endl;
		for(int i=0;i<nF;i++){
			for(int j=0;j<nC;j++){
				cout<<"Digite ["<<i<<"]["<<j<<"]: " ;
				cin>>*(*(punteroMatriz+i)+j);
			}
		}
	}
}

void mostrarDatos(int **punteroMatriz, int nF, int nC){
    if(nF>20 || nC>20) {
		cout<< "No existe matriz."<<endl;
	}
	else {
		cout<<"Impriendo la matriz: "<<endl;
		for(int i=0;i<nF;i++){
			for(int j=0;j<nC;j++){
				cout<<*(*(punteroMatriz+i)+j);
			}
			cout<<"\n";
		}
	}
}

void Buscar(int **punteroMatriz, int nF, int nC){
	int maximo, minimo;
	maximo=*(*(punteroMatriz+0)+0);
	minimo=*(*(punteroMatriz+0)+0);
	for(int i=0;i<nF;i++){
		for(int j=0;j<nC;j++){
			if(*(*(punteroMatriz+i)+j)>maximo){
				maximo = *(*(punteroMatriz+i)+j);
			}
			else minimo = *(*(punteroMatriz+i)+j);
		}
	}
	cout<<"El maximo es: "<<maximo<<endl;
	cout<<"El minimo es: "<<minimo<<endl;
}
