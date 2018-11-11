/*4. Hacer una matriz preguntando al usuario el numero de filas y columnas, llenarla
de numeros aleatorios, copiar el contenido a otra matriz y por ultimo mostrarla en 
pantalla.*/
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	int matriz[100][100],filas,columnas,aleatorio,copia[100][100];
	
	cout<<"Ingrese el numero de filas de la matriz: ";cin>>filas;
	cout<<"Ingrese el numero de columnas de la matriz: ";cin>>columnas;
	cout<<"\n\tMatriz Original con numeros aleatorios: "<<endl;
	srand(time(NULL));
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			aleatorio=1+rand()%(1000); 
			matriz[i][j]=aleatorio;
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<endl;
	cout<<"\tMatriz copia con el contenido de la original: "<<endl;
		for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			copia[i][j]=matriz[i][j];
			cout<<copia[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<endl;
	system("pause");
	return 0;
}
