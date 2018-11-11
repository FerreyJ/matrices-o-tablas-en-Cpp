/*1. Hacer un programa para rellenar una matriz pidiendo al usuario el numero de filas 
y columnas. Posteriormente mostrar la matriz en pantalla.*/
#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int num[100][100],filas,columnas;
	
	cout<<"Ingrese el numero de filas: ";cin>>filas;
	cout<<"Ingrese el numero de columnas: ";cin>>columnas;
	//Almacenando elementos en la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Ingrese un numero["<<i<<"]["<<j<<"]: ";cin>>num[i][j];
		}
	}
	cout<<endl;
	//Mostrando la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<num[i][j]<<" ";
		}
		cout<<"\n";
	}
	getch();
	return 0;
}
