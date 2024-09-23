/* Problema 1013: O maior */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,maior_ab;

    scanf("%d %d %d", &a, &b, &c);
    maior_ab = (a+b+abs(a-b))*0.5;
    if(c>maior_ab)
    {
        printf("%d eh o maior\n", c);
    }
    else
    {
        printf("%d eh o maior\n", maior_ab);
    }
}