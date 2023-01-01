#include <iostream>
using namespace std;
 
int main()
{
    int tam, num=0, col=0,fil=0;
    
    do
    {
        cout <<"Tamanio impar del cuadrado: \n";cin >> tam;
    } while (!(tam%2));
    
    const int constMagica = (tam * ( tam * tam + 1 )) / 2; //esto se usara mas tarde para saber el tamaño total de la suma de columnas 
    int matriz[tam][tam];
    
    cout << "\nSolucion al cuadrado magico de tamanio " << tam << "):\n";  //creacion de la matriz remplazada por 0'ros

    //matriz de prueba de movimiento
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            matriz[i][j]=0;
        }
        cout<<endl;
    }

    //condicionales movimiento
    int y=1;
    for (int h=1; h <= tam*tam; h++)
    {   
        if (h==1) { // posicion inicial (1)
            fil=0;
            col=(tam-1)/2;
            matriz[fil][col]=y;
            y++;
        }
        else if (fil==0 && col!=tam-1) { // para correr cuando esta en la fila 0
            fil=tam-1;
            col=col+1;
            matriz[fil][col]=y; 
            y++;
        }  
        else if (fil!=0 && col!=tam-1) { // para mover el numero en diagonal hacia arriba a la derecha
                
            if (fil!=0 && col!=tam-1 && matriz[fil-1][col+1] == 0) {
                col+=1;
                fil-=1;
                matriz[fil][col]=y;
                y++;
            }
            else {
            col=col;
            fil=fil+1;
            matriz[fil][col]=y;
            y++;
            }
        }
        else if (col==(tam-1) && fil!=0) { // para la esquina inferior derecha (se va a la izq y sube 1)
            fil=fil-1;
            col=tam-tam;
            matriz[fil][col]=y;
            y++;
        }
        else if (col==(tam-1) && fil==0)
        {
            col=col;
            fil=fil+1;
            matriz[fil][col]=y;
            y++;
        }
    }

    cout<<"CUADRADO MAGICO"<<endl;
    cout<<string(25, '-')<<endl;
    //matriz comprobar moviento
        for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (matriz[i][j]<10) {
                cout <<"[ 0"<<matriz[i][j]<<"]"; 
            }
            else if (matriz[i][j]<100) {
                cout <<"[ "<<matriz[i][j]<<"]"; 
            }
            else {
                cout <<"["<<matriz[i][j]<<"]"; 
            }
        }
        cout<<endl;
    }
    cout<<string(44, '-')<<endl;
    cout<<"La suma para este cuadrado magico es de: "<<constMagica<<endl;
    return 0;
}