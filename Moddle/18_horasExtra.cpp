#include <iostream>
using namespace std;

int main () {
    int horas, total, a, b, Vhora;
    bool normales, dobles, triples;

    cout<<"Exprese el valor de la hora: "<<endl;cin>>Vhora;
    cout<<string(60, '-')<<endl;
    cout<<"LA HORA SE PAGA A "<<Vhora<<"$"<<endl;
    cout<<"LA HORA EXTRA (hasta 8 horas despues de las 40 normales) SE PAGA A "<<Vhora*2<<"$"<<endl;
    cout<<"LA HORA EXTRA (luego de 48 horas) SE PAGA A "<<Vhora*3<<"$"<<endl;
    cout<<string(60, '-')<<endl;

    cout<<"Ingrese las horas totales de trabajo"<<endl;cin>>horas;
    cout<<string(40, '-')<<endl;

    if (horas<=40)
    {
        cout<<"NO SON HORAS EXTRAS (menos de 40 horas)"<<endl;
        total = horas * Vhora;
        cout<<"Las horas que se le pagaran valen: "<<total<<"$"<<endl;
    }

    if (horas>40 && horas<49)
    {
        cout<<"SON HORAS EXTRAS (40 y 48 horas)"<<endl;
        if (horas>=40) {
            normales = true;
            a = horas - 40;
        }
        else
            normales = false;

        if (a>=8) {
            dobles = true;
            b = a - 8;
        }
        else
            dobles = false;


    if (normales == true && dobles == false) {
        total = ((40*Vhora) + (a*(Vhora*2)));
    }   
        cout<<"Las horas que se le pagaran valen: "<<total<<"$"<<endl;
    }

    if (horas>=49)
    {
        cout<<"SON HORAS EXTRAS (mas de 48 horas)"<<endl;
        if (horas>=40) {
            normales = true;
            a = horas - 40;
        }
        else
            normales = false;

        if (a>=8) {
            dobles = true;
            b = a - 8;
        }
        else
            dobles = false;

        if (b>0) {
            triples = true;
        }
        else
            triples = false;


    if (normales == true && dobles == true && triples == true) {
        total = ((40*Vhora) + (8*(Vhora*2)) + (b*(Vhora*3)));
    }
        cout<<"Las horas que se le pagaran valen: "<<total<<"$"<<endl;
    }

    return 0; 
}