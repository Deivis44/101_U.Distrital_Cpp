#include<iostream>
using namespace std;

int main() {
    float a, b, presion, volumen, temp, masa;

    cout<<"Ingrese la presion: "; cin>>presion;
    cout<<"Ingrese el volumen: "; cin>>volumen;
    cout<<"Ingrese la temperatura: "; cin>>temp;
    cout<<"...\n";

    a = (presion * volumen);
    b = (0.37 * (temp + 460));
    masa = a / b;
    cout<<"La relacion de estas magnitudes en la masa de aire es: "<<masa<<endl;

    return 0;
}