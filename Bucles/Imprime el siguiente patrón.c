#include <stdio.h>
#include <stdlib.h>
//Escriba un programa para imprimir el siguiente patrón numérico usando un bucle.//
int main()
{
    //Utilizamos for para comenzar el bucle y la evaluacion del mismo,dice i comienza en 1 si i es menor o = a i entonces ira incrementado//
    for (int i = 1; i<=5;i++){
             //Aqui comenzamos otro bucle y otra evaluacion dice j=1 si j es <=i; enotnces j va incrementado hasta que la condicion se cumpla//
             for (int j=1; j<=i;j++){
                 //este printf es el encargado de imprimir el resultado de j//
                 printf("%d", j);
             }
             //Y este printf es el que se encarga de imprimir un salto de lineas//
             printf("\n");
    }
}
