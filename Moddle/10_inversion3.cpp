#include <iostream>
using namespace std;

int main () {
    int p1, p2, p3, suma;
    float porcentaje1, porcentaje2, porcentaje3;

    cout<<string(50, '-')<<endl;
    cout<<"PORCENTAJE DE INVERSION CON RESPECTO AL TOTAL"<<endl;
    cout<<string(50, '-')<<endl;

    // pedir valores del capital
    cout<<"Ingrese el valor de inversion de la primera persona: ";cin>>p1;
    cout<<"Ingrese el valor de inversion de la segunda persona: ";cin>>p2;
    cout<<"Ingrese el valor de inversion de la tercera persona: ";cin>>p3;
    cout<<string(50, '-')<<endl;

    suma = p1 + p2 + p3;
    cout<<"El valor total de la inversion es de: "<<suma<<"$"<<endl;

    // calcular porcentaje con una regla de 3
    porcentaje1 = p1 * 100;
    porcentaje1 = porcentaje1 / suma;

    porcentaje2 = p2 * 100;
    porcentaje2 = porcentaje2 / suma;

    porcentaje3 = p3 * 100;
    porcentaje3 = porcentaje3 / suma;

    cout<<"El % de inversion de la primera persona es del: "<<porcentaje1<<"%"<<endl;
    cout<<"El % de inversion de la primera persona es del: "<<porcentaje2<<"%"<<endl;
    cout<<"El % de inversion de la primera persona es del: "<<porcentaje3<<"%"<<endl;

    return 0;
}