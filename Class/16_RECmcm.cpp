#include <stdio.h>
#include <iostream>
using namespace std;

int maximo_comun_divisor(int a, int b) {
    int temporal;//Para no perder b
    while (b != 0) {
        temporal = b;
        b = a % b;
        a = temporal;
    }
    return a;
}

int minimo_comun_multiplo(int a, int b) {
    return (a * b) / maximo_comun_divisor(a, b);
}

int main(void) {
    int a = 0, b=0;
    cout<<"DIGITE A: ";cin>>a;
    cout<<"DIGITE B: ";cin>>b;
    int mcm = minimo_comun_multiplo(a, b);

    cout<<"MCM de "<<a<<" y "<<b<<"= "<<mcm;
    return 0;
}