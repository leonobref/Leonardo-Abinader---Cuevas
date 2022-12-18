#include <stdio.h>

int main(){
    printf("Esse programa recebe uma temperatura em Celsius e mostra sua equivalente em Farenheits.\n");
    int C;
    printf("\nDigite a temperatura em Celsius: ");
    scanf("%d", &C);

    printf("\nTemperatura em Farenheits = %d\n", ((9*C+160)/5));
    system("pause");
    return 0;
}
