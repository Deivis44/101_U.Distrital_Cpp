#include<iostream>
using namespace std;

int main() {
    float capital, gine, trauma, pedia;
    gine = 40, trauma = 30, pedia = 30;

    cout<<"Ingrese el capital que con el cual el hospital cuenta"<<endl; cin>>capital;

    gine = gine/100;
    gine = gine * capital;

    trauma = trauma/100;
    trauma = trauma * capital;

    pedia = pedia/100;
    pedia = pedia * capital;

    cout<<"...\n";
    cout<<"La cantidad de dinero que le corresponde a Ginecologia es: "<<gine<<endl;
    cout<<"La cantidad de dinero que le corresponde a Traumatologia es: "<<trauma<<endl;
    cout<<"La cantidad de dinero que le corresponde a Pediatria es: "<<pedia<<endl;


    return 0;
}