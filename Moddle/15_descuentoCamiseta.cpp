#include <iostream>
using namespace std;

int main () {
    float precioT, precioD, Desc3 = 0.20, Desc1 = 0.10, total;
    long precioN = 40000, cantidad;

    cout<<string(30, '-')<<endl;
    cout<<"Una camisa vale 40.000$"<<endl;
    cout<<"// Si compra 3 o mas, obtendra un descuento del 20%"<<endl;
    cout<<"// Si compra menos de 3, obtendra un descuento del 10%"<<endl;
    cout<<string(30, '-')<<endl;

    cout<<"Cuantas camisas piensa comprar?"<<endl;cin>>cantidad;
    cout<<string(30, '-')<<endl;

    if (cantidad>=3) {
        precioD =0;
        precioT =0;
        precioT = precioN * cantidad;
        cout<<"En total las camisas sin descuento costaran: "<<precioT<<endl;
        precioD = precioT * Desc3;
        precioD = precioD - precioT;
        cout<<"En total las camisas con descuento costaran: "<<precioD<<endl;
    }        
    else if (cantidad<3 && cantidad>0) {
        precioD =0;
        precioT =0;
        precioT = precioN * cantidad;
        cout<<"En total las camisas sin descuento costaran: "<<precioT<<endl;
        precioD = precioT * Desc1;
        precioD = precioD - precioT;
        cout<<"En total las camisas con descuento costaran: "<<precioD<<endl;
    }
    else {
        cout<<"Debe aunque sea comprar una camisa"<<endl;
    }


    return 0;
}