/* Problema 1009: Salário com bônus */

#include <stdio.h>
#include <stdlib.h>

#define COMISSAO (0.15)

typedef struct 
{
    char *nome;
    double salario_fixo, vendas_efetuadas;
}data_t;

int main()
{
    double montante;
    data_t vendedor;
    scanf("%s %lf %lf", &vendedor.nome, &vendedor.salario_fixo, &vendedor.vendas_efetuadas);
    montante = vendedor.salario_fixo + vendedor.vendas_efetuadas*COMISSAO;
    printf("TOTAL = R$ %.2lf\n", montante);
}