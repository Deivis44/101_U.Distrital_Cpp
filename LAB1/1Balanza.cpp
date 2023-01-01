#include <iostream>
using namespace std;

int main () { //Void por Int
    float carga_izquierda;
    float carga_derecha;
    float longitud_izquierdo;
    float longitud_derecho;
    float fuerza_izquierda;
    float fuerza_derecha;

    cout<<"Ingrese la carga aplicada al brazo izquierdo:";
    cin>>carga_izquierda;
    cout<<"Ingrese la carga aplicada al barzo derecho:";
    cin>>carga_derecha;
    cout<<"Ingrese la longitud del brazo izquierdo:";
    cin>>longitud_izquierdo;
    cout<<"Ingrese la alomgitu del brazo derecho:";
    cin>>longitud_derecho;
    fuerza_izquierda=carga_izquierda*longitud_izquierdo;
    fuerza_derecha=carga_derecha*longitud_derecho;
    
    if(fuerza_izquierda==fuerza_derecha)
        {
            cout<<"La balanza esta en equilibrio..."<<endl;
        }
    else
        {
            cout<<"La balanza no esta en equilibrio..."<<endl;
            if(fuerza_izquierda<fuerza_derecha)
            {
                cout<<"Se debe aplicar mas carga al brazo izquierdo..."<<endl;
            }
            else
            {
                cout<<"Se debe aplicar mas carga al brazo derecho..."<<endl;
            }
        }
}