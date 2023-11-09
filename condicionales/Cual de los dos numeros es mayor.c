#include <stdio.h>
#include <stdlib.h>
//Escribe un programa que pida al usuario ingresar dos números y determine cuál de los dos es mayor.//
int main()
{
    //nombramos dos variables una que se ba a llamar numero1 y la otra que es numero2
    int numero1, numero2;
    //pedimos el primer numero//
    printf("dame el primer numero: ");
    //se va a guardar en numero1//
    scanf("%d", &numero1);
    //pedimos el segundo numero//
    printf("dame el segundo numero: ");
    //se va a guardar en numero2
    scanf("%d", &numero2);
    //con if evaluamos su numero1 > numero2 se imprimira el primer numero es mayor//
    if (numero1 > numero2){
        printf("El primer numero es mayor");
        //Numero1 < numero2 se imprimira el numero2 es mayor que numero1//
    }
    else if (numero1 < numero2){
        printf ("El segundo numero es mayor");
    }

    return 0;
}
