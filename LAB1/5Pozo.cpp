#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float base,a,b,lado1,lado2,h;
	cout<<"Digite la longitud de la base:";
	cin>>base;
	cout<<"Digite la longitud de varilla 1: ";
	cin>>a;
	cout<<"Digite la longitud de varilla 2: ";
	cin>>b;

	if(a<base||b<base||a==0||b==0||base==0) {
		cout<<"Los valores son incongruentes (la longitud de la varilla debe ser mayor a la de la base hip > cat[a v b]";
	} else  {
		lado1=sqrt(pow(a,2)-pow(base,2));
		lado2=sqrt(pow(b,2)-pow(base,2));
		h=(lado1*lado2)/lado1+lado2;
		cout<<"La altura comprendida entre el fondo del  pozo"<<endl;
		cout<<"y la interseccion de las dos varillas es: "<<h;
	}
}