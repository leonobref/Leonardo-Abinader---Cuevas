#include <stdio.h>

int main(){
    printf("Esse programa calcula a area de um quadrado.\n");
    float l;
    printf("\nDigite um tamanho para um lado do quadrado: ");
    scanf("%f", &l);
    
    printf("\nArea do quadrado = %.2f\n", l*l);
    printf("\nDobro da area do quadrado = %.2f\n", l*l*2);
    system("pause");
    return 0;
}
