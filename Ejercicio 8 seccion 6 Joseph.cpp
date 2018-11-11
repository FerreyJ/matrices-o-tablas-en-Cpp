/*8. Realice un programa que calcule el producto de dos matrices cuadradas de 
3x3.*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int ma1[3][3]={{1,2,1},{2,1,1},{2,1,2}};
	int ma2[3][3]={{3,2,1},{2,3,1},{1,1,3}};
	int ma3[3][3];
	cout<<"\tMatriz 1"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<ma1[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<endl;
	cout<<"\tMatriz 2"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<ma2[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<endl;
	cout<<"\tMatriz de multiplicacion"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			ma3[i][j]=0;
			for(int k=0;k<3;k++){
				ma3[i][j]=ma3[i][j]+ma1[i][k]*ma2[k][j];
			}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<ma3[i][j]<<" ";
		}
		cout<<"\n";
	}
	cout<<endl;
	getch();
	return 0;
}
