#include <stdio.h>

int main(){
    float num,numaior,numenor,i = 1;
    printf("Digite um numero real: ");
    scanf("%f", &num);
    numaior = num;
    numenor = num;

    while (i < 15){
        printf("Digite um numero real: ");
        scanf("%f", &num);
        if(num > numaior)
        numaior = num;
        else
        if(num < numenor)
        numenor = num;
        i = i + 1;
    }
    printf("\nO menor numero digitado foi: %.2f", numenor);
    printf("\nO maior numero digitado foi: %.2f", numaior);
    return 0;
}
