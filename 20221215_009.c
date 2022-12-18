#include <stdio.h>

int main(){
    int a,b;
    printf("Digite um numero inteiro: ");
    scanf("%d", &a);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &b);
    float c;
    printf("Digite um numero real: ");
    scanf("%f", &c);
    printf("\nProduto do dobro do primeiro com metade do segundo = %d\n", (2*a)*(b/2));
    printf("\nSoma do triplo do primeiro com o terceiro = %.2f\n", (3*a) + c);
    printf("\nO terceiro elevado ao cubo = %.2f\n", c*c*c);
    system("pause");
    return 0;
}
