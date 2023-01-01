#include <stdio.h>

int main(){
    int num,sp = 0,si = 0;
    for(;;){
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num > 0)
    {
        if(num % 2 == 0)
        sp = sp + num;
        if(num % 2 == 1)
        si = si + num;
        if(num > 1000){
        printf("\nSoma dos Pares: %d", sp);
        printf("\nSoma dos Impares: %d", si);
        break;
        }
    }
    else{
    printf("So devem ser digitados numeros inteiros positivos");
    printf("\nSoma dos Pares: %d", sp);
    printf("\nSoma dos Impares: %d", si);
    break;
    }
    }
    return 0;

}
