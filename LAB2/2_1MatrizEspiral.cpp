#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int tam=0,x,i,j,der,arriba,abajo,izq,fil,ciclo=0,rest;

	do
	{
	cout<<"Digite el valor de la matriz menor a 100: ";
	cin>>tam;
		
	} while (tam>99 || tam<0 );
	
	int  MC[719][719];
	x=1;
	fil=0;
	
	do{
		der=0;
		while(der<tam-ciclo-ciclo){
			MC[fil][der+ciclo]=x;
			x++;
			der++;
		}
		der=tam-1-ciclo;
		abajo=1+ciclo;
		while(abajo<tam-ciclo){
			MC[abajo][der]=x;
			x++;
			abajo++;
		}
		rest++;
		der=tam-1-rest+ciclo;
		izq=tam-1-ciclo;
		while(der-ciclo>=(tam-tam)){
			MC[izq][der]=x;
			x++;
			der--;
		}	
		der=tam-tam+ciclo;
		arriba=tam-1-rest+ciclo;
		while(arriba-rest+ciclo>=(tam-tam)){
			MC[arriba][der]=x;
			x++;
			arriba--;
		}
		rest++;
		ciclo++;
		fil++;
	}while(fil<tam);
	cout<<"MATRIZ EN ESPIRAL"<<endl;
	i=0;
	do{
		j=0;
		while(j<tam){
					if(MC[i][j]<10){
				cout<<"[00"<<MC[i][j]<<"]";
			}else if(MC[i][j]<100){
				cout<<"[0"<<MC[i][j]<<"]";
			}else{
			cout<<"["<<MC[i][j]<<"]";	
			}
			j++;	
		}
		cout<<endl;
		i++;
	}while(i<tam);
	return 0;
}