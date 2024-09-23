/* Problema 1011: Esfera */

#include <stdio.h>
#include <stdlib.h>

#define PI (3.14159)

int main()
{
    double raio, volume;
    scanf("%lf", &raio);

    volume = raio*raio*raio*PI*(4.0/3);
    printf("VOLUME = %.3lf\n", volume);
}