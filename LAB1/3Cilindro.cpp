#include<iostream>
#include<math.h>
using namespace std;

int main() {
    float altura, radio, areal, volumen;
    cout<<"Ingrese la altura del cilindro: "; cin>>altura;
    cout<<"Ingrese el radio del cilindro: "; cin>>radio;

    if (altura!=0||radio!=0) {
        areal = 2*M_PI * radio * altura;
        volumen = M_PI * pow(radio, 2) * altura;
        cout<<"El area del cilindro es: "<<areal<<endl;
        cout<<"El volumen del cilindro es: "<<volumen;
        cout<<"...\n";
    }
        else {
            cout<<"No puedes encontrar el volumen o area del cilindo si te falta un valor"<<endl;
        }
    return 0;
}