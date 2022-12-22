#include <stdio.h>

int main(){
    int num,numaior,numenor,i = 1;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num >= 0)
    {
        numaior = num;
        numenor = num;

        while (i < 20){
            printf("Digite um numero: ");
            scanf("%d", &num);
            if (num >= 0)
            {
            if(num > numaior)
            numaior = num;
            else
            if(num < numenor)
            numenor = num;
            }
            else{
            printf("\nErro (Nao podes digitar um numero negativo, por isso o programa foi interrompido)");
            break;
            }
            i = i + 1;
        }
    printf("\nO menor numero digitado foi: %d", numenor);
    printf("\nO maior numero digitado foi: %d", numaior);
    }
    else
    printf("\nErro (Nao podes digitar um numero negativo, por isso o programa foi interrompido)");
    return 0;
}
