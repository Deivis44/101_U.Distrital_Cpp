#include<iostream>
#include<math.h>
using namespace std;

int main() {
    float a, b,c,n,raiz1,resta,suma;
    a = 1;

    cout<<"Para la ecuacion x^2 + bx + c, factorizar de la forma (x + r1)(x + r2)"<<endl;
    cout<<"Ingrese el valor B de la forma (bx): "; cin>>b;
    cout<<"Ingrese el valor C de la forma (c): "; cin>>c;
    cout<<"// por lo tanto la expresion dados los datos queda: x^2"<<" + ("<<b<<"x)"<<" + ("<<c<<") = 0"<<endl;
    cout<<"... \n";

    n = pow(b,2)-4*a*c;
    if (a==0) {
        cout << "la solucion no existe o es indefinido" << endl;
    } else {
        if (n>=0) {
            raiz1 = sqrtf(n);
            suma = (-b+raiz1)/(2*a);
            resta = (-b-raiz1)/(2*a);
            cout << "las raices reales de la ecuacion (" << a << ")x^2+(" << b << ")x+(" << c << ") son: " << "(x+(" << -suma << "))" << "(x+(" << -resta << "))" << endl;
        } else {
            if (b==0) {
                cout << "los resultados de la ecuacion (" << a << ")x^2+(" << b << ")x+(" << c << ") es un numero complejo" << endl;
                cout << "los cuales son: " << endl;
                cout << "raiz 1" << endl;
                cout << "+" << (sqrtf(-n))/2*a << "i" << endl;
                cout << "raiz 2" << endl;
                cout << "-" << (sqrtf(-n))/2*a << "i" << endl;
            } else {
                cout << "los resultados de la ecuacion (" << a << ")x^2+(" << b << ")x+(" << c << ") es un numero complejo" << endl;
                cout << "los cuales son: " << endl;
                cout << "raiz 1" << endl;
                cout << -b/2*a << "+" << (sqrtf(-n))/2*a << "i" << endl;
                cout << "raiz 2" << endl;
                cout << -b/2*a << "-" << (sqrtf(-n))/2*a << "i" << endl;
            }
        }
    }
    return 0;
}