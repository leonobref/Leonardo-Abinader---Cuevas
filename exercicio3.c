//Calculo da porcentagem do garçom(Os famosos 10%)
#include <stdio.h>

int main()
{
    float cont;
    printf ("\nValor da Conta: R$");
    scanf ("%f", &cont);

    printf("\nPorcentagem do Garcom = R$%.2f\n\n\n", cont * 0.10);

    system("pause");
    return(0);
}
