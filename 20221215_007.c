#include <stdio.h>

int main(){
    printf("Esse programa recebe uma temperatura em Farenheits e mostra sua equivalente em Celsius.\n");
    int F;
    printf("\nDigite a temperatura em Farenheit: ");
    scanf("%d", &F);

    printf("\nTemperatura em Celsius = %d\n", (5 * (F-32) / 9));
    system("pause");
    return 0;
}
