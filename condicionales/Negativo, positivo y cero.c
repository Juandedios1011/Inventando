#include <stdio.h>
#include <stdlib.h>
//Realiza un programa que determine si un número ingresado por el usuario es positivo,negativo o cero.//
int main()
{
    //creamos la variable int y la nombramos numero//
    int numero;
    //le pedimos el numero al usuario//
    printf("dame un numero: ");
    //verificamos ese numero y lo mandamos a la variable numero//
    scanf("%d", &numero);
    //con if verificamos si numero es > 0 es positivo el numero y si es < es negativo y si es 0 es 0//
    if (numero > 0){
        printf("el numero es positivo");
    }
    else if (numero < 0){
        printf ("el numero es negativo");
    }else{
        printf ("Es 0");
    return 0;
}}
