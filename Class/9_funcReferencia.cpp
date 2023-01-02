#include <iostream>
int funcion(int &n, int &m);
using namespace std;

int main (){
    int a=10, b=20;
    cout<<"a,b --> "<<a<<", "<<b<<endl;
    cout<<"funcion(a,b) --> "<<funcion(a,b)<<endl;
    cout<<"a,b --> "<<a<<", "<<b<<endl;
    
    return 0;
}

int funcion(int &n, int &m) {
    n=n+2;
    m=m-5;
    return (n+m);
}