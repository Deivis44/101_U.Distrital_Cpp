#include <iostream>
using namespace std;

int main() {
	int tam;
    string letras=" ",aux=" ";
	
    cout<<"\n";
	cout<<"Ingrese la palabra que desea convertir"<<endl;
    cin>>letras;

	cout<<string(40, '-')<<endl;
	cout<<"TIPO DE ORDEN"<<endl;
	cout<<string(20, '-')<<endl;
	cout<<"1. MENOR A MAYOR"<<endl;
	cout<<"2. MAYOR A MENOR"<<endl;
	cout<<string(40, '-')<<endl;

	cout<<"Que tipo de orden: ";
	cin>>tam;
	cout<<string(40, '-')<<endl;

	switch(tam){
		case 1:
			for(int i=0;i<letras.size();i++){
        		for(int j=0;j<(letras.size()-1);j++)
            		if (letras[j]>letras[j+1]){
            			aux[0]=letras[j];
            			letras[j]=letras[j+1];
            			letras[j+1]=aux[0];
        			}
    		}
    		cout<<"DE MENOR A MAYOR QUEDA: "<<letras<<endl;		
    		break;
    	case 2:
    		for(int i=0;i<letras.size();i++){
        		for(int j=0;j<(letras.size()-1);j++)
            		if (letras[j]<letras[j+1]){
            			aux[0]=letras[j];
            			letras[j]=letras[j+1];
            			letras[j+1]=aux[0];
        			}
    		}
    		cout<<"DE MAYOR A MENOR QUEDA: "<<letras<<endl;
    		break;
    	default:
    		cout<<"Ingresa una opcion valida";
	}
    return 0;
}