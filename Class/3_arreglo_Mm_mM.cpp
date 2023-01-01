#include <iostream>
using namespace std;

int main() {

    int esp;
    cout<<"ingrese el tamanio del arreglo: ";
    cin>>esp;
    cout<<"---\n";

    int array[esp];

    for (int i = 0; i < esp; i++)
    {
        cout<<"ingrese el valor numero: "<<i+1<<endl;
        cin>>array[i];
    }
    cout<<"---\n";
    cout<<"El arreglo queda: ";
    
    for(int i=0; i<esp; i++)
    {
        cout<<"{"<<array[i]<<"}";
    }
        cout<<"\n---\n";

    //metodo de la burbuja menor a mayor
    int aux;
    for (int i = 0; i < esp; i++) {
        for (int j = 0; j < esp; j++) {
            if(array[j]>array[j+1]) {

             aux = array[j];
             array[j]=array[j+1];
             array[j+1]=aux;   
            }
        }
        
    }
    
        cout<<"El arreglo ordenado de menor a mayor queda: ";
    
        
    for(int i=0; i<esp; i++)
    {
        cout<<"{"<<array[i]<<"}";
    }
        cout<<"\n---\n";


    //mayor a menor 
    for (int i = 0; i < esp; i++) {
        for (int j = 0; j < esp; j++) {
            if(array[j]>array[j-1]) {

             aux = array[j];
             array[j]=array[j-1];
             array[j-1]=aux;   
            }
        }
        
    }
    
        cout<<"El arreglo ordenado de mayor a menor queda: ";
    
    for(int i=0; i<esp; i++)
    {
        cout<<"{"<<array[i]<<"}";
    }

    return 0;
}