#include<iostream>
using namespace std;

int main() {
    float pulsaciones;
    int edad;

    cout<<"Ingrese su edad para medir la cantidad de pulsaciones por cada 10s de ejercicio:"<<endl; cin>>edad;

    pulsaciones = (220 - edad);
    pulsaciones = pulsaciones / 10;
    cout<<"El numero de pulsaciones para su edad son: "<<pulsaciones<<endl;

    return 0;
}