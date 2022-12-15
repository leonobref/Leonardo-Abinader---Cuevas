//Calculo do aumento em 10% de um salário

#include <stdio.h>

int main()
{
    float sal;
    printf ("\nSalario: R$");
    scanf ("%f", &sal);

    printf("\nNovo salario = R$%.2f\n\n\n", sal + (sal * 0.10));

    system("pause");
    return(0);
}
