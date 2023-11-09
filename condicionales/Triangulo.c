#include <stdio.h>
#include <stdlib.h>
//Haz un programa que calcule el área de un triángulo a partir de la longitud de sus lados.//

double calcular_area_triangulo(double a, double b, double c) {
    // Calcular semiperímetro
    double s = (a + b + c) / 2;

    // Calcular el área usando la fórmula de Herón
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    return area;
}

int main() {
    double a = 3.0;
    double b = 4.0;
    double c = 5.0;
    printf("El área del triángulo es: %.2f\n", calcular_area_triangulo(a, b, c));

    return 0;
}
