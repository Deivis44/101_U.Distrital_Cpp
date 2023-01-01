#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int main(){

    /*
    c = capital
    I = interes de nomina anual (intrsna) en %
    VF = Valor futuro de la inversion
    i = interes efectivo capitalizable por año (intrsef) en %
    p = número de periodos capitalizables en el año
    n = cantidad de años a los que desea realizar la inversion
    N = número de periodos totales de la inverion
    */

    int n, c, N, p, hola;
    float intrsna, intrsef, vv, vp, vf, intrsefF;
    n = 0, N = 0, intrsna = 0;

    // Interfaz de datos para capital "c", Interes nominal anual "intrsna", años "n" y periodo "p"

    printf("A. Digite el capital que desea ingresar \n"); cin>>c;

    printf("B. Digite el interes nominal anual \n"); cin>>intrsna;
    intrsna = intrsna/100, "\n";
    cout<<"// El interes corresponde al: "<<intrsna;

    printf("\nC. A cuantos años desea realizar la inversion \n"); cin>>n;

    printf("... \n");
    printf("1. Mensual \n");
    printf("2. Trimestral \n");
    printf("3. Semestral \n");
    printf("4. Anual \n");
    printf("... \n");
    printf("D. Elija el periodo de tiempo al que desea trabajar \n"); scanf("%d", &p);

    // Condicional para determinar con cual periodo se va a trabajar

    if (p == 1) {
    printf("// Eligio Mensual \n");
    p = 12;
    
    }
        else if (p == 2) {
        printf("// Eligio Trimestral \n");
        p = 4;
        N = n*p;
        cout<<N;
        }   
            else if (p == 3) {
            printf("// Eligio Semestral \n");
            p = 2;
            N = n*p;
            cout<<N;
            }
                else if (p == 4) {
                printf("// Eligio Anual \n");
                p = 1;
                N = n*p;
                cout<<N;
                }
                    else {
                    printf("// Debe elegir una de las 4 opciones // \n");
                    }

    printf("... \n");

    // Ademas, dependiendo de el periodo elegido "p", se multiplicara por los años suministrados "n", todo eso es igual a N expresado en meses
    N = n*p;
    cout<<N<<" Mes(es) es el numero de periodo(s) total(es) de la inversion"<<endl;

    // Interes efectivo capitalizable por año
    intrsef = intrsna/12, "\n";
    intrsefF = intrsef * 100, "%";
    cout<<"El interes efectivo capitalizable por año es: "<< intrsefF << "%" <<endl;
    
    // vf = c*(1+intrsef)^n

    // Resultado valor final "vf" cumpliendo la conficiones dadas
    vv = intrsef + 1;
		vf = pow(vv, n);
    vf = c * vf;
    cout<<"El valor final de la inversion es = "<<vf<<"$";

    printf("... \n");
    return 0;
}