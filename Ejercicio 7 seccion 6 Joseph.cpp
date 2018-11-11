/*7. Desarrollar un programa que determine si una matriz es simétrica o no. Una
matriz es simétrica si es cuadrada y si es igual a su matriz transpuesta.*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int filas,columnas,matriz[100][100];
	char band='F';
	
	cout<<"Introduzca el numero de filas: ";cin>>filas;
	cout<<"Introduzca el numero de colulmnas: ";cin>>columnas;
	
	if(filas!=columnas){
		cout<<"\nLa matriz no es simetrica";
	}
	else{cout<<"\n ";
		for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				cout<<"Digite un numero para ["<<i<<"]["<<j<<"]: ";
				cin>>matriz[i][j];
			}
		}cout<<"\n\tMostrar la matriz principal:\n";
		for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				cout<<matriz[i][j]<<" ";
			}
			cout<<"\n";
		}
		cout<<"\n\tMostrando la Matriz Transpuesta: "<<endl;
		for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				cout<<matriz[j][i]<<" ";
			}
			cout<<"\n";
		}
		for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				if(matriz[i][j]!=matriz[j][i]){
					band='V';
		}
		}
		}
		if(band=='V'){cout<<"\nLa Matriz no es simetrica"<<endl;
		}
		else{cout<<"\nLa Matriz es simetrica"<<endl;
		}
	}
	
	getch();
	return 0;
}
