#include <iostream>
using namespace std;

int main () {

    float dormir, sentado, Cdormir, Csentado;

    Cdormir = 1.08;
    Csentado = 1.66;

    cout<<string(50, '-')<<endl;
    cout<<"Se necesitan quemar 3500 calorias para perder 1kg de grasa"<<endl;

    cout<<"El usuario solo puede dormir y estar sentado en reposo"<<endl;
    cout<<"// Cuando esta durmiendo consume (1.08C / min)"<<endl;
    cout<<"// Cuando esta sentado en reposo consume (1.66C / min)"<<endl;
    cout<<string(50, '-')<<endl;


    cout<<"Cuanto tiempo(min) permanecera durmiendo?: ";cin>>dormir;
    Cdormir= Cdormir * dormir;
    cout<<Cdormir<<" Calorias son las que consume en ese intervalo de tiempo"<<endl;
    if (Cdormir > 3500) {
        cout<<"// Con eso puede quemar al menos 1kg de masa corporal"<<endl;
    }
    else {
        cout<<"// Con eso NO puede quemar al menos 1kg de masa corporal"<<endl;
    }

    cout<<"\n";

    cout<<"Cuanto tiempo(min) permanecera sentado?: ";cin>>sentado;
    Csentado= Csentado * sentado;
    cout<<Csentado<<" Calorias son las que consume en ese intervalo de tiempo"<<endl;
    if (Csentado > 3500) {
        cout<<"// Con eso puede quemar al menos 1kg de masa corporal"<<endl;
    }
    else {
        cout<<"// Con eso NO puede quemar al menos 1kg de masa corporal"<<endl;
    }

    cout<<string(50, '-')<<endl;
    return 0;
}