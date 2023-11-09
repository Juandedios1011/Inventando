#include <stdio.h>
#include <stdlib.h>
//Haz un programa que calcule el �rea de un tri�ngulo a partir de la longitud de sus lados.//

double calcular_area_triangulo(double a, double b, double c) {
    // Calcular semiper�metro
    double s = (a + b + c) / 2;

    // Calcular el �rea usando la f�rmula de Her�n
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    return area;
}

int main() {
    double a = 3.0;
    double b = 4.0;
    double c = 5.0;
    printf("El �rea del tri�ngulo es: %.2f\n", calcular_area_triangulo(a, b, c));

    return 0;
}
