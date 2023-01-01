#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout<<string(50, '-')<<endl;
    cout<<"Ingrese el 1er numero: ";cin>>a;
    cout<<"Ingrese el 2do numero: ";cin>>b;
    cout<<string(50, '-')<<endl;


    if (a>b) {
        cout<<"Los numeros en orden ascendente quedan: "<<b<<", "<<a<<endl;
    }
    else {
        cout<<"Los numeros en orden ascendente quedan: "<<a<<", "<<b<<endl;
    }
    

    return 0;
}