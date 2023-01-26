#include <stdio.h>

void imprimirpar(int v[], int tamanho){
    int i;
    for (i = 0; i < tamanho; i++){
        if (v[i] % 2 == 0)
        printf("%d, ", v[i]);
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
    imprimirpar(v, tamanho);
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
    imprimirpar(v, tamanho);
    }
}
