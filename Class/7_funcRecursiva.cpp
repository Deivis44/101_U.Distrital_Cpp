#include <iostream>
using namespace std;

float rec_v(float C, float X, float n) {
    
    if (n==0) {
        return (C);
    }
    else {
        return (rec_v(C,X,n-1)*(X/100)+rec_v(C,X,n-1));
    }
}

int main(){
    float a,b,c;
    
    cout<<"Ingrese el capital inicial"<<endl;cin>>a;
    cout<<"Ingrese la cantidad de años"<<endl;cin>>b;
    cout<<"Ingrese el porcentaje de interes"<<endl;cin>>c;
    
    cout<<"El valor final del capital del la inversion sera: "<<rec_v(a,b,c)<<endl;
    
    return 0;
}