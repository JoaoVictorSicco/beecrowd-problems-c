/* Área do Círculo */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main()
{
    double raio, circulo;
    scanf("%lf", &raio);

    circulo = (PI)*(raio*raio);
    printf("A=%.4lf\n", circulo);
    return 0;
    
}