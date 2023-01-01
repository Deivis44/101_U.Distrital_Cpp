#include<iostream>
using namespace std;

int main() {
    float porcentaje, preciof, precioi;
    porcentaje = 30;

    cout<<"El dueño de una tienda quiere ganar el 30% a un articulo, ingrese el precio inicial: "<<endl; cin>>precioi;
    porcentaje = porcentaje/100;

    preciof = porcentaje * precioi;
    preciof = preciof + precioi;
    cout<<"El nuevo sueldo que ahora posee este trabajador es de: "<<preciof<<"$"<<endl;

    return 0;
}