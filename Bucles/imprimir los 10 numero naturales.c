#include <stdio.h>
#include <stdlib.h>
//Imprima los primeros 10 números naturales usando el bucle while//
int main()
{
    //utilizamos i como variable que dice que va a comenzar desde 1 que es el primer numero que nos piden y el condicional int//
    int i = 1;
    //con while comienza el bucle dice si i es mayor o igual a 10 se detendra si no se cumple seguira imprimiendo hasta que la condicion se cumpla//
    while (i<=10){
        //Aqui utilizamos printf para ir imprimiendo los numero y luego mas abajo dice i ira incrementado hasta que el bucle acabe//
        printf("%d\n", i);
        i++;
        }

    return 0;
}
