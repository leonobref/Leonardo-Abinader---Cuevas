#include <stdio.h>

int main(){

    float n1, n2, n3, n4;

    printf("Digite nota do primeiro trimestre: ");
    scanf("%f", &n1);
    printf("Digite nota do segundo trimestre: ");
    scanf("%f", &n2);
    printf("Digite nota do terceiro trimestre: ");
    scanf("%f", &n3);
    printf("Digite nota do quarto trimestre: ");
    scanf("%f", &n4);
    printf("\nMedia = %.1f\n",(n1 + n2 + n3 + n4) / 4);

    return 0;
}
