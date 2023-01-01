#include <iostream>
using namespace std;

int main () {
    float cuota1 = 0.03, cuota2 = 0.02;
    int monto;

    cout<<string(40, '-')<<endl;
    cout<<"Ingrese el monto de su finanza"<<endl;cin>>monto;
    cout<<string(40, '-')<<endl;

    if (monto<50000) {
        cout<<"La cuota para tal monto es del (3%)"<<endl;
        monto = monto * cuota1;
        cout<<"Eso corresponde a: "<<monto<<"$"<<endl;
    }
    if (monto>=50000)
    {
        cout<<"La cuota para tal monto es del (2%)"<<endl;
        monto = monto * cuota2;
        cout<<"Eso corresponde a: "<<monto<<"$"<<endl;
    }
    

    return 0;
}
