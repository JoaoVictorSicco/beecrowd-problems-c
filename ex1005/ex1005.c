/* Problema 1005: Média 1 */

#include <stdio.h>
#include <stdlib.h>

#define PESO_A (3.5)
#define PESO_B (7.5)

int main()
{
    double a,b,media;
    scanf("%lf %lf", &a,&b);

    media = (PESO_A*a + PESO_B*b)/(PESO_A+PESO_B);
    printf("MEDIA = %.5lf\n", media);
}