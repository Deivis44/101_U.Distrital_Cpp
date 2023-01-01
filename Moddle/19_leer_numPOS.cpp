#include <iostream>
using namespace std;

int main () {
    int i,n;

    cout<<string(40, '-')<<endl;
    cout<<"CONTAR 10 NUMEROS POSITIVOS"<<endl;
    cout<<string(40, '-')<<endl;

    for (i = 1; i <= 10; i++) {
        cout<<"Ingrese un numero: ";cin>>n;

        if (n>0){
            cout<<n<<endl;
        }
        else
            cout<<"// NO es un numero positivo"<<endl;
    }

    return 0;
}