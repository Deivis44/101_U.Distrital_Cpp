#include<iostream>
using namespace std;

int main() {
    float porcentaje, sueldof, sueldoi;
    porcentaje = 25;

    cout<<"Un empleado obtuvo un incremento del 25%, ingrese el capital inicial: "<<endl; cin>>sueldoi;
    porcentaje = porcentaje/100;

    sueldof = porcentaje * sueldoi;
    sueldof = sueldof + sueldoi;
    cout<<"El nuevo sueldo que ahora posee este trabajador es de: "<<sueldof<<"$"<<endl;

    return 0;
}