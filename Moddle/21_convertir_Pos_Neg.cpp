#include <iostream>
using namespace std;

int main () {
    int i,n;

    cout<<string(40, '-')<<endl;
    cout<<"CONVERTIR 15 NUMEROS NEG A POS"<<endl;
    cout<<string(40, '-')<<endl;

    for (i = 1; i <= 15; i++) {
        cout<<"Ingrese un numero negativo: ";cin>>n;

        if (n<0){
            n = n * -1;
            cout<<"El numero en positivo queda: "<<n<<endl;
            cout<<"\n";
        }
        else
            cout<<"// NO es un numero negativo"<<endl;
            cout<<"\n";
    }

    cout<<"FIN"<<endl;

    return 0;
}