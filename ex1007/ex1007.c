/* Problema 1007: Diferença */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,diferenca;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    diferenca = (a*b)-(c*d);
    printf("DIFERENCA = %d\n", diferenca);
}