#include <stdio.h>
#include <stdlib.h>
//Cuenta el número total de dígitos en un número//
int main()
{
    //Primero nombramos una variable i y un contador que va a estar en 0//
    int i, contador = 0;
    //Le pedimos un numero al usuario con este printf//
    printf("dame un numero: ");
    //Con este scanf capturamos el numero que nos dio el usuario//
    scanf("%d", &i);
    //con el while comienza el bucle y evaluamos si i es distinto a 0 el contador incrementa y se divide por 10 para eliminar el ultimo digito//
    while (i!=0){
        contador++;
        i = i /10;
    }
    //Utilizamos este printf para decirle al usuario cuantos digitos tiene su numero//
    printf("El numero que me diste tiene:%d digitos\n", contador);
    return 0;
}
