#include <stdio.h>
void maximoeminimo(int *vet, int *mami, int *vetfinal){
    int maximo = *vet;
    int minimo = *vet;
    while(vet <= vetfinal){
        if (*vet > maximo)
            maximo = *vet;
        if (*vet < minimo)
            minimo = *vet;
        vet++;
    }
    *mami = maximo;
    *(mami + 1) = minimo;
}
int main()
{
    int n;
    printf("Digite um tamanho para um vetor inteiro: ");
    scanf("%d", &n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        printf("Digite o numero %d do vetor: ", i+1);
        scanf("%d", (vetor+i));
    }
    int maxmin[2];
    maximoeminimo(vetor, maxmin, &vetor[n-1]);
    printf("\nO Valor Maximo do vetor eh igual a %d", *maxmin);
    printf("\nO Valor Minimo do vetor eh igual a %d", *(maxmin + 1));
    return 0;
}
