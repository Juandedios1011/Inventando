#include <stdio.h>
#include <stdlib.h>
//Imprimir lista en orden inverso usando un bucle//
int main()
{
    //Creamos una list 1 con los numero (50,60,70,80,90)//
    int list1[] = {50,60,
                     70,80,90};
    //Luego utilizamos un bucle for y dentro de el evaluamos en orden inversa, comenzando desde el ultimo digito 4 hasta el primero que es 0//
    for (int i=4; i>=0; i--){
    //Utilizamos if para evaluar si list1 es = o si lo es ejecutara break para finalizar con el bucle//
        if (list1 [i]==0){
            break;
        }
    //Luego si el bucle cumple las codiciones se imprimira la list1 de orden inversa//
        printf("%d", list1 [i]);
    //Con este printf hacemos un salto de linea//
        printf("\n");
    }
    return 0;
}
