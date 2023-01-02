#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdio.h>
using namespace std;

struct registro{
	long long int codigo;
	char nombre[60];
	char apellido[60];
	char programa[60];
	float nota1;
	float nota2;
	float nota3;
	float notaf;	
	char debbug [10];
};

int main(){
	struct registro	alsem1;
		long int ce,con;
			cout<<"digite la cantidad de estudiantes que desea planillar: "<<endl;
				cin>>ce;
			
	for (con=0;con!=ce;con++){
		printf("Digite su primer nombre: \n");
		scanf("%s", &alsem1.nombre);
		printf("Digite su primer apellido: \n");
		scanf("%s", &alsem1.apellido);
		printf("Digite el programa al que pertenece: Nota: Cambie los espacios por \"_\" \n");
		scanf("%s", &alsem1.programa);
		cout<<"Digite su codigo sin puntos ni comas: "<<endl;
			cin>>alsem1.codigo;
		cout<<"Digite su primera nota del primer semestre: "<<endl;
			cin>>alsem1.nota1;
		cout<<"Digite su segunda nota del primer semestre: "<<endl;	
			cin>>alsem1.nota2;
		cout<<"Digite su tercera nota del primer semestre: "<<endl;	
			cin>>alsem1.nota3;
	
	alsem1.notaf= (alsem1.nota1+alsem1.nota2+alsem1.nota3)/3;
					
	cout<<"Sus planilla es: "<<endl;
	cout<<"Nombre: "<<alsem1.nombre<<" "<<alsem1.apellido<<endl;
	cout<<"Programa "<<alsem1.programa<<endl;
	cout<<"Codigo: "<<alsem1.codigo<<endl;
	cout<<"Notas: "<<ceil(alsem1.nota1)<<" / "<<ceil(alsem1.nota2)<<" / "<<ceil(alsem1.nota3)<<endl;
	cout<<"Su nota final es: "<<ceil(alsem1.notaf)<<endl<<endl<<endl;
	
	struct registro alsem2;
		cout<<"***Bienvenido a la planilla de su segundo semestre***"<<endl;

		cout<<"Digite su primera nota del segundo semestre: "<<endl;
			cin>>alsem2.nota1;
		cout<<"Digite su segunda nota del segundo semestre: "<<endl;	
			cin>>alsem2.nota2;
		cout<<"Digite su tercera nota del segundo semestre: "<<endl;	
			cin>>alsem2.nota3;
			
	alsem2.notaf= (alsem2.nota1+alsem2.nota2+alsem2.nota3)/3;
					
	cout<<"Sus planilla es: "<<endl;
	cout<<"Nombre: "<<alsem1.nombre<<endl;
	cout<<"Programa "<<alsem1.programa<<endl;
	cout<<"Codigo: "<<alsem1.codigo<<endl;
	cout<<"Notas: "<<ceil(alsem2.nota1)<<" / "<<ceil(alsem2.nota2)<<" / "<<ceil(alsem2.nota3)<<endl;
	cout<<"Su nota final es: "<<ceil(alsem2.notaf)<<endl;}
	
getch;	
return 0;

}