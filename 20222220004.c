#include <stdio.h>

int main(){
    int num,numaior,numenor,i = 1;
    printf("Digite um numero: ");
    scanf("%d", &num);
    numaior = num;
    numenor = num;

    while (i < 20){
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num > numaior)
        numaior = num;
        else
        if(num < numenor)
        numenor = num;
        i = i + 1;
    }
    printf("\nO menor numero digitado foi: %d", numenor);
    printf("\nO maior numero digitado foi: %d", numaior);
    return 0;
}
