/*6. Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.*/
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int mat1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int mat2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	
	cout<<"\tPrimera Matriz"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<mat1[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<endl;
	cout<<"\tSegunda Matriz"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<mat2[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<endl;
	cout<<"\nEl resultado de sumar ambas matrices es: "<<endl;	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		cout<<mat1[i][j]+mat2[i][j]<<" ";
		}
		cout<<"\n";
	}
	getch();
	return 0;
}
