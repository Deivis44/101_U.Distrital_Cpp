#include <iostream>
using namespace std;

int main () {
    int n, contador=0;
    float interes=0.02, TOTAL, capital;

    cout<<string(40, '-')<<endl;
    cout<<"Ingrese el valor inicial con el que desea realizar su inversion:  "; cin>>capital;
    cout<<"a. Por cuantos anios desea realizar la inversion? ";cin>>n;

    // calculo de años a meses
    n = n * 12;
    cout<<" // Pasado a meses queda: "<<n<<endl;
    cout<<string(40, '-')<<endl;

    for (int i = 0; i < n; i++)
    {
        contador++;
        cout<<"CAPITAL CON EL QUE INGRESA #("<< contador <<"): "<<capital<<"$"<<endl;
        TOTAL = capital * interes;
        TOTAL = TOTAL + capital;
        capital = TOTAL;
        cout<<"CAPITAL CON EL QUE SALE: "<<TOTAL<<"$"<<endl;
        cout<<"\n";
    }
    cout<<string(40, '-')<<endl;

    return 0;
}