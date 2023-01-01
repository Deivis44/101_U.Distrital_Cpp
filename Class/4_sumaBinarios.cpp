#include <iostream>
#include <windows.h>
#define color SetConsoleTextAttribute
using namespace std;

int main () {
    int a, b, c, d, hola, hola2;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    cout<<"\n";
    cout<<"Calculadora de binarios"<<endl;
    color(hConsole, 1);
    cout<<"Con numeros de 8 bits"<<endl;
    color(hConsole, 7);
    cout<<string(30, '-')<<endl;

    do {
        cout<<"por favor introduzca valores menores a 256 (positivos)"<<endl;            
        cout<<"Ingrese el numero A para convertir a binario: ";cin>>a;
        cout<<"Ingrese el numero B para convertir a binario: ";cin>>b;
    } while (a>=256||b>=256||b<0||a<0);
    
    cout<<"\n";
    cout<<string(30, '-')<<endl;
    cout<<"LOS NUMEROS EN BINARIO SON: "<<endl;
    cout<<string(30, '-')<<endl;

    int binario[9]={0,0,0,0,0,0,0,0,0};
    int binario_2[9]={0,0,0,0,0,0,0,0,0};

    c = a;
    d = b;

    // decimal a binario de A'
    for (int j=0;j<9;j++) {
        hola2 = c % 2;
        c = c / 2;
        binario_2[8-j]= hola2;
    }

    cout<<"\n";
    cout<<"  -";
    for (int j=0;j<8;j++) {  
        cout<<"  "<<binario_2[j+1]<<"";
    }
    cout<<" // ("<<a<<") -> 10"<<endl;

    // decimal a binario de A
    c = a;
    for (int j=0;j<9;j++) {
        hola2 = c % 2;
        c = c / 2;
        binario_2[j]= hola2;
    }

    cout<<"+"<<endl;
    
    // decimal a binario de B'
    for (int i=0;i<9;i++) {
        hola = d % 2;
        d = d / 2;
        binario[8-i]= hola;  
    }
    cout<<"  -";
    for (int i=0;i<8;i++) {
        cout<<"  "<<binario[i+1]<<"";
    }
    cout<<" // ("<<b<<") -> 10"<<endl;

    // decimal a binario de B
    d = b;
    for (int i=0;i<9;i++) {
        hola = d % 2;
        d = d / 2;
        binario[i]= hola;  
    }
	
    cout<<"  "<<string(30, '-')<<endl;
    /*
    SUMA DE BINARIOS
    array[i] = dato;
    */ 

    int acarreo;
    int suma[9]={0,0,0,0,0,0,0,0,0};
    for (int k=0;k<9;k++)
    {
        acarreo=binario[k]+binario_2[k]+suma[k];
        
        switch (acarreo) {
        case 1:
            suma[k]=acarreo;
            break;
        case 2:
            suma[k]=0;
            suma[k+1]=1;
            break;
        case 3:
            suma[k]=1;
            suma[k+1]=1;
            break;
        case 0:
            suma[k]=0;
        default:

            break;
        }
        
    }
    
    cout<<"=";
    for (int o = 0;o < 9;o++)
    {
        cout<<" "<<suma[8-o]<<" ";
    }
    cout<<"// ("<<a+b<<") -> 10"<<endl;
        
    cout<<"\n";
    return 0;
}