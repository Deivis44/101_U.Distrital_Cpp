#include <iostream>
#include <stdlib.h>
using namespace std;

struct registro {
    string nombre;
    int sueldo;
    string direccion;
    long int telefono;
};

struct registro empleado = {"david", 1220, "call9c", 1545646};
    
int main () {
    int n;
    
    do {
    cout<<"ingrese la forma de la que lo quiere hacer xd: ";cin>>n;
    } while (n<0 || n>4);
    
    if (n==2){ 
        struct registro persona;
        persona.nombre = "david";
        persona.sueldo = 100;
        persona.direccion = "cll 19c #32 97";
        persona.telefono = 3115006480;
    
        cout<<persona.nombre<<endl;
        cout<<persona.sueldo<<endl;
        cout<<persona.direccion<<endl;
        cout<<persona.telefono<<endl;
    } else if (n==1){
        cout<<empleado.nombre<<endl;
        cout<<empleado.sueldo<<endl;
        cout<<empleado.direccion<<endl;
        cout<<empleado.telefono<<endl;
    } else if (n==3) {
        cout<<"jaja salu2"<<endl;
    }
    
    
    return 0;
}