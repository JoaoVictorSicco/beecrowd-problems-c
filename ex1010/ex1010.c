/* Problema 1010: Cálculo Simples */

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int codigo_peca, numero_peca;
    float valor_unitario_peca;
    
}data_t;

int main()
{
    double valor_total;
    data_t peca1;
    data_t peca2;

    scanf("%d %d %f", &peca1.codigo_peca, &peca1.numero_peca, &peca1.valor_unitario_peca);
    scanf("%d %d %f", &peca2.codigo_peca, &peca2.numero_peca, &peca2.valor_unitario_peca);

    valor_total = peca1.numero_peca*peca1.valor_unitario_peca + peca2.numero_peca*peca2.valor_unitario_peca;
    printf("VALOR A PAGAR: R$ %.2lf\n", valor_total);

}
