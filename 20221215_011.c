#include <stdio.h>

int main(){
    printf("Esse programa calcula seu salario liquido e seus impostos.\n");
    float sh,ht,sb,in,ir,si;
    printf("\nDigite seu salario hora: R$");
    scanf("%f", &sh);
    printf("Digite as horas trabalhadas por mes: ");
    scanf("%f", &ht);
    
    sb = sh*ht;
    in = sb *0.08;
    ir = sb *0.11;
    si = sb *0.05;

    printf("\nSalario Bruto = R$%.2f\n", sb);
    printf("\nValor pago ao INSS = R$%.2f\n", in);
    printf("\nValor pago ao sindicato = R$%.2f\n", si);
    printf("\nSalario Liquido = R$%.2f\n",sb - in - ir - si);
    system("pause");
    return 0;
}
