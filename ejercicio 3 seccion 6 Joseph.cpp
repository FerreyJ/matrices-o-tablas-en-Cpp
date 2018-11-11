/*3. Hacer una matriz de tipo entera de 2*2, llenarla de numeros y luego copiar 
todo su contenido hacia otra matriz.*/
#include<iostream>
#include<conio.h>

using namespace std;
int main(){
	int matriz[2][2]={{1,2},{3,4}},copia[2][2];
	cout<<"Matriz Original"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<"\nCopia de la Matriz"<<endl;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			copia[i][j]=matriz[i][j];
			cout<<copia[i][j]<<" ";
		}
		cout<<"\n";
	}
	getch();
	return 0;
}
