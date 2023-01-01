#include <iostream>
using namespace std;

int main() {
    string nombre, clave;
    float precio, precioDES;

    cout<<string(60, '-')<<endl;
    cout<<"IDENTIFICADOR PRODUCTO PARA APLICAR DESCUENTO CON CLAVE (01 o 02)"<<endl;
    cout<<string(60, '-')<<endl;
    cout<<"Ingrese el nombre del producto: ";cin>>nombre;
    cout<<"Ingrese la clave del producto: ";cin>>clave;
    cout<<"Ingrese el precio del producto: ";cin>>precio;


    if (clave == "01") {
        cout<<string(50, '-')<<endl;
        precioDES = precio * 0.1;
        precioDES = precio - precioDES;
        cout<<"El precio con descuento es de: "<<precioDES<<"$"<<endl;
        cout<<string(50, '-')<<endl;
    }
    else if (clave == "02") {
        cout<<string(50, '-')<<endl;
        precioDES = precio * 0.2;
        precioDES = precio - precioDES;
        cout<<"El precio con descuento es de: "<<precioDES<<"$"<<endl;
        cout<<string(50, '-')<<endl;
    }

    return 0;
}