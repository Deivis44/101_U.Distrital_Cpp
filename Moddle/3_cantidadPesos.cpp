#include<iostream>
using namespace std;

int main() {
    float pesos, cambio, dolares;

    cout<<"Ingrese la cantidad en pesos"<<endl;
    cin>>pesos;
    
    cout<<"Ingrese la tasa de cambio (Si no la conoce ingrese: 0.00022)"<<endl;
    cin>>cambio;

    dolares = pesos*cambio;
    cout<<"El valor: "<<pesos<<" COP$, es equivalente a: "<<dolares<<" US$";


    return 0;    
}