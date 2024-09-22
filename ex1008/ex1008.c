/* Problema 1008: Salário */

#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     int num, horas_total;
//     double salario_hora, salario;

//     scanf("%d %d %lf", &num, &horas_total, &salario_hora);
//     salario = horas_total*salario_hora;
//     printf("NUMBER = %d\nSALARY = U$ %.2lf\n", num, salario);
// }

typedef struct 
{
    int num;
    int horas_total;
    double salario_hora;
}data_t;


int main()
{
    data_t funcionario;
    double salario;
    scanf("%d %d %lf", &funcionario.num, &funcionario.horas_total, &funcionario.salario_hora);
    salario = funcionario.horas_total*funcionario.salario_hora;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", funcionario.num, salario);
}
