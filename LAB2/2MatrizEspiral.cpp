#include<iostream>
using namespace std;

int main(){
    int rest, tam, valor, col, arriba, abajo, izquierda, fil, ciclo=0;
    int MA[100][100];
    
    cout<<"Ingrese el tamaño con el que quiere que la matriz opere: ";cin>>tam;
    
    valor=1;
    fil=0;
    do {
        col=0;
        //mover derecha
        while (col<tam-ciclo-ciclo) {
            MA[fil][col+ciclo] = valor;
            valor++;
            col++;
        } 

        col = tam-1-ciclo;
        abajo=1+ciclo;
        //mover abajo

        while (tam-ciclo>abajo) {
            MA[abajo][col] = valor;
            valor++;
            abajo++;
        }

        rest++;
        col = tam -1-(rest)+ciclo;
        izquierda = tam-1-ciclo;
    
          //mover izquierda

        while (col-ciclo>=(tam-tam)) {
            MA[izquierda][col]=valor;
            valor++;
            col--;
        }

        col=tam-tam+ciclo;
        arriba = tam-1-(rest)+ciclo;
          //mover arriba 

        while (arriba-rest+ciclo>=(tam-tam)) {
            MA[arriba][col]=valor;
            valor++;
            arriba--;
        } 

        rest++;
        ciclo++;
        fil++;
    } while (fil<tam);
    

    // IMPRIMIR LA MATRIZ
    int i=0;
    do {
        int j=0;
        do {
            if (MA[i][j]<10) {
            cout<<"|00"<<MA[i][j]<<"|";
            }
            else if (MA[i][j]<100) {
                cout<<"|0"<<MA[i][j]<<"|";
            }
            else {
                cout<<"|"<<MA[i][j]<<"|";
            }
            
            j++;
        } while (j<tam);
        cout<<endl;
        i++;
    } while (i<tam);

    return 0;
}