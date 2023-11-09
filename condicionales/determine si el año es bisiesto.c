#include <stdio.h>
#include <stdlib.h>
//Realiza un programa que determine si el año ingresado por el usuario es bisiesto o no.//
int main()
{
    //declaramos la variable int y la nombramos anio//
    int anio;

    //pedimos el anio//
    printf("ingresa el año: ");
    //evaluamos//
    scanf("%d", &anio);
//con if evaluamos si la condicion esta correcta//
    if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) {
//imprimimos//
        printf("El año %d es bisiesto.\n", anio);
    } else {
        printf("El año %d no es bisiesto.\n", anio);
    }

    return 0;
}
