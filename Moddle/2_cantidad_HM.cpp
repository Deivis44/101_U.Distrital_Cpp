#include<iostream>
using namespace std;
    
int main() {
    int personas;
    float todos, Cm, Ch, gente, hombres, mujeres, total;

    cout<<"Ingrese la cantidad total de personas"<<endl;
    cin>>personas;

    cout<<"Ingrese la cantidad de hombres"<<endl;
    cin>>hombres;

    cout<<"Ingrese la cantidad de mujeres"<<endl;
    cin>>mujeres;

    total = mujeres + hombres;

    cout<<"...\n";
    if (personas == total) {
        Ch = hombres*100;
        Ch = Ch/total;
        cout<<Ch<<"% corresponde a la proporcion de hombres"<<endl;

        Cm = mujeres*100;
        Cm = Cm/total;
        cout<<Cm<<"% corresponde a la proporcion de mujeres"<<endl;
    }
        else {
            cout<<"La cantidad de personas total no corresponde a la suma de hombres y mujeres"<<endl;
        }

    return 0;
}