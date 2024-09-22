/* Problema 1006: Média 2 */

#include <stdio.h>
#include <stdlib.h>

#define PESO_A (2)
#define PESO_B (3)
#define PESO_C (5)


int main()
{
    double a,b,c,media2;
    scanf("%lf %lf %lf",&a,&b,&c);
    media2 = (PESO_A*a + PESO_B*b + PESO_C*c)/(PESO_A+ PESO_B+ PESO_C);
    printf("MEDIA = %.1lf\n", media2);

}