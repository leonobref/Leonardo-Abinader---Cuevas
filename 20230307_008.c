#include <stdio.h>
void troca(float *a, float *b){
    float c;
    c = *a;
    *a = *b;
    *b = c;
}

int main(){
    float num1, num2;
    printf("Digite o numero 1: ");
    scanf("%f", &num1);
    printf("Digite o numero 2: ");
    scanf("%f", &num2);

    printf("Numero 1: %.2f, Numero 2: %.2f\n", num1, num2);

    troca(&num1, &num2);
    printf("\nApos a Troca\n");
    printf("Numero 1: %.2f, Numero 2: %.2f\n", num1, num2);

    return 0;
}
