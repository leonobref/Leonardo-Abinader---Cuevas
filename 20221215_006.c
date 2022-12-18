#include <stdio.h>

int main(){
    printf("Esse programa calcula seu salario baseado em quanto voce ganha por hora e em quantas horas voce trabalhou no mes.\n");
    float sh,ht;
    printf("\nDigite seu salario hora: R$");
    scanf("%f", &sh);
    printf("Digite as horas trabalhadas por mes: ");
    scanf("%f", &ht);

    printf("\nSalario = R$%.2f\n", sh*ht);
    system("pause");
    return 0;
}
