#include <stdio.h>
#include <stdlib.h>
//Crea un programa que calcule el promedio de tres notas ingresadas por el usuario y determine si el estudiante aprobó o no el curso.//
int main()
{
    //Pedimos las 3 notas//
    float nota1, nota2, nota3, promedio;

    printf("ingrese la primera nota: ");
    //Verificamos nota 1//
    scanf("%f", &nota1);

    printf("ingrese la segunda nota: ");
    //verificamos nota 2//
    scanf("%f", &nota2);

    printf("ingrese la tercera nota: ");
    //verificamos nota 3//
    scanf("%f", &nota3);

    //Sumamos todas las notas y luego las dividimos por 3 que son las notas que estamos pidiendo//
    promedio = (nota1 + nota2 + nota3) / 3;

    printf("El promedio de las notas es: %d\n", promedio);
//este es el promedio que tiene que cumplir para aprobar si no se imprimira no aprobo//
    if (promedio >= 6.0) {
        printf("El estudiante aprobó el curso\n");
    } else {
        printf("El estudiante no aprobó el curso\n");
    }

    return 0;
}



