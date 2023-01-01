#include <iostream>
using namespace std;

int main () {
    int n, STOTAL, vendedor=0;
    float comision=0.10, sueldo, venta1, venta2, venta3, Descuento, CTOTAL, CTOTAL2;

    cout<<"Ingrese la cantidad de vendedores de su empresa: ";cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"\n"<<string(40, '-')<<endl;
        vendedor++;
        cout<<"Ingrese el sueldo de este vendedor #("<<vendedor<<")"<<endl;cin>>sueldo;

        cout<<"Ingrese el precio de su 1ra venta: ";cin>>venta1;
        cout<<"Ingrese el precio de su 2da venta: ";cin>>venta2;
        cout<<"Ingrese el precio de su 3ra venta: ";cin>>venta3;

        CTOTAL = (venta1 + venta2 + venta3);
        CTOTAL2 = CTOTAL * comision;
        cout<<string(40, '-')<<endl;
        cout<<"La comision que recibe por sus 3 ventas es: "<<CTOTAL2<<endl;
        cout<<"Sumado a su sueldo queda: "<<sueldo+CTOTAL2<<endl;
        cout<<string(40, '-')<<endl;
    }
    sueldo=0;

    return 0;
}