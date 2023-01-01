#include <iostream>
using namespace std;

int main () {
    float lunes, miercoles, viernes, promedio;

    cout<<string(50, '-')<<endl;
    cout<<"PROMEDIO DE TIEMPO EN LA MISMA RUTA (entre semana), para los dias: "<<endl;
    cout<<string(50, '-')<<endl;

    cout<<"LUNES (por definir)"<<endl;
    cout<<"MARTES"<<endl;
    cout<<"MIERCOLES (por definir)"<<endl;
    cout<<"JUEVES"<<endl;
    cout<<"VIERNES (por definir)"<<endl;

    cout<<string(20, '-')<<endl;

    //solicitar datos al usuario
    cout<<"// Por lo tanto favor digite los datos que estan por definir"<<endl;
    cout<<"¿Cuanto tiempo tardo para el dia LUNES?"<<endl;cin>>lunes;
    cout<<"¿Cuanto tiempo tardo para el dia MIERCOLES?"<<endl;cin>>miercoles;
    cout<<"¿Cuanto tiempo tardo para el dia VIERNES?"<<endl;cin>>viernes;

    //calcular
    promedio = lunes + miercoles + viernes;
    promedio = promedio / 3;
    cout<<"El tiempo promedio entre estos dias es: "<<promedio<<"s";

    return 0;
}