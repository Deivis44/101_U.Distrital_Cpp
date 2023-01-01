#include <iostream>
#include <cmath>
#include <time.h>
#include <cstdlib>
using namespace std;

int main () {
    float desc1 = 0.15, desc2= 0.20, total, precio, precioT;

    // para el numero aleatorio
    srand(time(NULL));
    int n;

    int l_inferior1 = 0;
    int l_superior2 = 100;

    cout<<string(40, '-')<<endl;
    for (int i = 0; i < 1; i++) {
        n = l_inferior1 + rand() % (l_superior2+1 - l_inferior1);
        cout<<"Numero aleatorio: "<<n<<endl;
    }


    // para el precio del producto
    srand(time(NULL));
    long n2;

    int l_inferior3 = 0;
    int l_superior4 = 100;

    for (int i = 0; i < 1; i++) {
        n2 = l_inferior3 + rand() % (l_superior4+1 - l_inferior3);
        precio = n2*1000;
        cout<<"El precio de su producto es de: "<<precio<<"$"<<endl;
    }
    cout<<string(40, '-')<<endl;


    // definir precio segun numero aleatorio
    if (n>=74) {
        precioT = precio;
        precio = precio * desc2;
        precioT = precioT - precio;
        cout<<"El valor de su producto con descuento (20%) es de: "<<precioT<<"$"<<endl;
        cout<<"El valor descontado fue de: "<<precio<<endl;
    }
    if (n<74) {
        precioT = precio;
        precio = precio * desc1;
        precioT = precioT - precio;
        cout<<"El valor de su producto con descuento (15%) es de: "<<precioT<<"$"<<endl;
        cout<<"El valor descontado fue de: "<<precio<<endl;
    }
    return 0;
}