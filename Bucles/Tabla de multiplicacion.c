#include <stdio.h>
#include <stdlib.h>
//Escribir un programa para imprimir la tabla de multiplicar de un número dado//
int main()
{
    int numero;
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    for(int i=1; i<=10; i = i + 1){
        printf("%d * %d = %d\n",numero, i , i * numero);
    }
    return 0;
}
