#include<iostream>
#include<conio.h>
using namespace std;

//prototipos de funciones
void LeerVector1(int *, int );
void LeerVector2(int *, int );
void Producto (int *, int *, int **, int);
void ImprimirMat (int **, int);

int *vector1, *vector2, **matriz, tamanio;

int main(){
	LeerVector1(vector1, tamanio);
	LeerVector2(vector2, tamanio);
	Producto(vector1, vector2, matriz, tamanio);
	ImprimirMat(matriz, tamanio);

	//Eliminando la memoriareservada
	delete[] vector1;
	delete[] vector2;
	for(int i=0;i<tamanio;i++){
		delete[] matriz[i];
	}
	delete[] matriz;
	
	getch();
	return 0;
}

void LeerVector1(int *vector1, int tamanio){
	cout<<"Ingresando datos del vector 1"<<endl;
    cout<<"Tamaño: " <<endl;
	cin>>tamanio;
	if(tamanio>100){
		cout<<"Maximo 100 elementos."<<endl;
	}
	else {
		vector1=new int[tamanio];
		for(int i=0;i<tamanio;i++){
			cout<<"Digite ["<<i<<"]: " ;
			cin>>*(vector1+i);
		}
	}
}

void LeerVector2(int *vector2, int tamanio){
	cout<<"Ingresando datos del vector 2"<<endl;
    cout<<"Tamaño: " <<endl;
	cin>>tamanio;
	if(tamanio>100){
		cout<<"Maximo 100 elementos."<<endl;
	}
	else {
		vector2=new int[tamanio];
		for(int i=0;i<tamanio;i++){
			cout<<"Digite ["<<i<<"]: " ;
			cin>>*(vector2+i);
		}
	}
}

void Producto(int *vector1, int *vector2, int **matriz, int tamanio){
    matriz=new int *[tamanio];
	for(int i=0;i<tamanio;i++){
		matriz[i]=new int[tamanio];
	}
	for(int i=0;i<tamanio;i++){
		for(int j=0;j<tamanio;j++){
			*(*(matriz+i)+j)=(*(vector1+i))*(*(vector2+j));
		}
	}
}

void ImprimirMat (int **matriz, int tamanio){
	cout<<"Imprimiendo la matriz: "<<endl;
	for(int i=0;i<tamanio;i++){
		for(int j=0;j<tamanio;j++){
            cout<<*(*(matriz+i)+j)<<"["<<i<<"]["<<j<<"]: " ;
		}
		cout<<"\n";
	}
}
