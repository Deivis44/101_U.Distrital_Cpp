#include <iostream>
using namespace std;

int main () {
    int numero;

    do
    {
        cout<<"Digite un numero: ";cin>>numero;
    } while ((numero<1) || (numero>100));
    
    for (int i = 1; i <=10; i++)
    {
        cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
    }
    
    cout<<"\n";
    return 0;
}
