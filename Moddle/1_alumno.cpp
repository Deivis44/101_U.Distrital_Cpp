#include<iostream>
using namespace std;

int main() {
    int a, b ,c, d, e;
    float promedio, examen, parcial, trabajof, parciales, total;
    parciales = 55, examen = 30, trabajof = 15;

    // Mostrar al usuario los datos para operar la nota final
    cout<<"Para saber la nota final del curso, las notas se dividen de la siguiente manera:"<<endl;
    cout<<"55% del promedio de sus notas parciales"<<endl;
    cout<<"30% de la nota de su examen final"<<endl;
    cout<<"15% de la nota de un trabajo final"<<endl;
    cout<<"...\n";
    
    // notas parciales
    cout<<"Digite las 1ra nota del parcial"<<endl;
    cin>>a;

    cout<<"Digite las 2da nota del parcial"<<endl;
    cin>>b;

    cout<<"Digite las 3ra nota del parcial"<<endl;
    cin>>c;

    promedio = a + b +c;
    promedio = promedio/3;
    cout<<"El promedio de las 3 notas parciales es = "<<promedio<<endl;

    cout<<"...\n";
    parciales = parciales/100;
    parciales = promedio * parciales;
    cout<<"La nota de los parciales es= "<<parciales<<endl;


    // notal del examen final
    cout<<"...\n";
    cout<<"Digite la nota del examen final"<<endl;
    cin>>d;

    examen = examen/100;
    examen = examen * d;
    cout<<"La nota del examen (como decimal) es = "<<examen<<endl;

    // nota del trabajo final
    cout<<"...\n";
    cout<<"Digite la nota del trabajo final"<<endl;
    cin>>e;

    trabajof = trabajof/100;
    trabajof = e * trabajof;
    cout<<"La nota del trabajo final es = "<<trabajof<<endl;

    // sumar los 3 porcentajes
    cout<<"...\n";
    total = parciales + examen + trabajof;
    cout<<"// La nota final del curso es = "<<total<<endl;

    return 0;
}