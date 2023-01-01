#include <iostream>
using namespace std;

int main () {
    float MatEX, MatTAR, examenMAT, FisEX, FisTAR, examenFIS, ProgEX, ProgTAR, examenPROG, PROMTOTAL;

    // MATEMATICAS
    MatEX = 0.9;
    MatTAR = 0.1;

    cout<<string(50, '-')<<endl;
    cout<<"Ingrese la nota de su examen de MATEMATICAS: ";cin>>examenMAT;
    MatEX = MatEX * examenMAT;
    cout<<"EXAMEN (90%): "<<MatEX<<endl;

    int nota1, nota2, nota3;
    float promMAT;
    cout<<"Ingrese la nota de la 1ra tarea de MATEMATICAS: ";cin>>nota1;
    cout<<"Ingrese la nota de la 2da tarea de MATEMATICAS: ";cin>>nota2;
    cout<<"Ingrese la nota de la 3ra tarea de MATEMATICAS: ";cin>>nota3;
    promMAT = (nota1 + nota2 + nota3)/3;

    cout<<"// El promedio de esas 3 notas es de: "<<promMAT<<endl;
    MatTAR = MatTAR * promMAT;
    cout<<"TAREAS (10%): "<<MatTAR<<endl;
    cout<<"Y la nota final (Examen + Tareas) = "<<MatTAR+MatEX<<endl;


    // FISICA
    FisEX = 0.8;
    FisTAR = 0.2;
    nota1 =0;nota2=0;nota3=0;

    cout<<string(50, '-')<<endl;
    cout<<"Ingrese la nota de su examen de FISICA: ";cin>>examenFIS;
    FisEX = FisEX * examenFIS;
    cout<<"EXAMEN (80%): "<<FisEX<<endl;

    float promFIS;
    cout<<"Ingrese la nota de la 1ra tarea de FISICA: ";cin>>nota1;
    cout<<"Ingrese la nota de la 2da tarea de FISICA: ";cin>>nota2;
    promFIS = (nota1 + nota2)/2;

    cout<<"// El promedio de esas 3 notas es de: "<<promFIS<<endl;
    FisTAR = FisTAR * promFIS;
    cout<<"TAREAS (20%): "<<FisTAR<<endl;
    cout<<"Y la nota final (Examen + Tareas) = "<<FisTAR+FisEX<<endl;

    cout<<string(50, '-')<<endl;
    
    
    // PROGRAMACION
    ProgEX = 0.85;
    ProgTAR = 0.15;
    nota1 =0;nota2=0;nota3=0;

    cout<<string(50, '-')<<endl;
    cout<<"Ingrese la nota de su examen de PROGRAMACION: ";cin>>examenPROG;
    ProgEX = ProgEX * examenPROG;
    cout<<"EXAMEN (85%): "<<ProgEX<<endl;

    float promPROG;
    cout<<"Ingrese la nota de la 1ra tarea de PROGRAMACION: ";cin>>nota1;
    cout<<"Ingrese la nota de la 2da tarea de PROGRAMACION: ";cin>>nota2;
    cout<<"Ingrese la nota de la 3ra tarea de PROGRAMACION: ";cin>>nota3;
    promPROG = (nota1 + nota2 + nota3)/3;

    cout<<"// El promedio de esas 3 notas es de: "<<promPROG<<endl;
    ProgTAR = ProgTAR * promPROG;
    cout<<"TAREAS (15%): "<<ProgTAR<<endl;
    cout<<"Y la nota final (Examen + Tareas) = "<<ProgTAR+ProgEX<<endl;

    cout<<string(50, '-')<<endl;


    // PROMEDIO DE LAS 3
    PROMTOTAL = ((MatTAR+MatEX)+(FisTAR+FisEX)+(ProgTAR+ProgEX));
    PROMTOTAL = PROMTOTAL /3;
    cout<<"La nota promedio de las 3 materias es de: "<<PROMTOTAL<<endl;
    cout<<string(50, '-')<<endl;

    return 0;
}