#include <stdio.h>

int fat(int n) {
    int fatorial;
    for(fatorial = 1; n > 1; n = n - 1)
    fatorial = fatorial * n;
return fatorial;
}

void imprimirfat(int v[], int tamanho){
    int i;
    for (i = 0; i < tamanho; i++){
        printf("%d, ", fat(v[i]));
    }
}

int main(){
    int i, tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    if (0 < tamanho && tamanho <= 100){
    int v[tamanho];
    for (i = 0; i < tamanho; i++){
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &v[i]);
    }
    imprimirfat(v, tamanho);
    }
    else{
    while (0 >= tamanho || tamanho > 100){
        printf("Digite o tamanho do vetor (Maximo 100): ");
        scanf("%d", &tamanho);
    }
    int v[tamanho];
    for (i = 0; i < tamanho; i++){
    printf("Digite o %do numero: ", i+1);
    scanf("%d", &v[i]);
    }
    imprimirfat(v, tamanho);
    }
}
