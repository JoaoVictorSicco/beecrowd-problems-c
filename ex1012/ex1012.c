/* Problema 1012: Área */

#include <stdio.h>
#include <stdlib.h>

#define PI (3.14159)

int main()
{
    double a, b, c, area_triangulo, area_circulo, area_trapezio, area_quadrado, area_retangulo;
    scanf("%lf %lf %lf", &a, &b, &c);
    area_triangulo = (a*c)/2;
    area_circulo = PI*c*c;
    area_trapezio = ((a + b)*c)/2;
    area_quadrado = b*b;
    area_retangulo = a*b;

    printf("TRIANGULO: %.3lf\n", area_triangulo);
    printf("CIRCULO: %.3lf\n", area_circulo);
    printf("TRAPEZIO: %.3lf\n", area_trapezio);
    printf("QUADRADO: %.3lf\n", area_quadrado);
    printf("RETANGULO: %.3lf\n", area_retangulo);


}