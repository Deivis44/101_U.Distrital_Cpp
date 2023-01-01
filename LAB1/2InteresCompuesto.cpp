#include<iostream> // Añadido
#include<stdio.h>
#include<stdlib.h>
#include<math.h> // Añadido
using namespace std; // Añadido


int main() { // Falta Int
    float p, n, r, f, I; // Falta declarar f

    /* leer datos de entrada mediante peticiones rotuladas */
    cout<<"Por favor, introduce la suma inicial (P):"; // Falta "" al final del enunciado
    cin>>p;
    cout<<"Por favor introduce el interes (r):";
    cin>>r;
    cout<<"Por favor, introduce el numero de anos (n):";
    cin>>n;

    /* calcular I y f */
    I = r/100; // Faltaba ; al final
    f = p*pow((1+I), n);

    /* escribir la salida */ // El comentario esta mal escrito (/*) (*/)
    cout<<"El valor final (F) es:"<<f;
    system("PAUSE");
    return 0;
}
    /* Sobra
    system("PAUSE");
    }
    */