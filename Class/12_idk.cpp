#include <iostream>
#include <stdio.h>

/* Plantear un programa que permita crear un archivo de acceso secuencial para un sistema
de cuentas por cobrar que ayude a mantener el registro de saldos o deudas de unos clientes
en una compañia. Para cada cliente el programa tiene un numero de cuenta , nombre de ese cliente
y el saldo. 

Estos datos constituyen un registro; el programa debe mostrar el primer registro del archivo en
en memoria secundaria */

int main () {
    int cuenta;
    double saldo;
    char nombre[30];
    
    FILE *p;
    if ((p=fopen("clientes.txt","w"))==NULL) {
        printf("Esa monda no existe, no sea gill\n");
    } else {
        printf("Int. de la Cta, Nombre y Saldo\n");
        printf("Int. EOF al final Entrada\n");
        printf("?");
        scanf("%d %s %lf", &cuenta, nombre, &saldo);
        
        while (!feof(stdin)) {
        fprintf(p,"%d %s %.2f\n", cuenta, nombre, saldo);
        printf("?");
        scanf("%d %s %lf", &cuenta, nombre, &saldo);
        }
        fclose(p);   
    }
    return 0;
}