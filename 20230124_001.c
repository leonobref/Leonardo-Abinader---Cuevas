#include <stdio.h>

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
    int j;
    for (j = tamanho -1; j >= 0; j--){
        printf("%d, ", v[j]);
    }
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
    int j;
    for (j = tamanho -1; j >= 0; j--){
    printf("%d, ", v[j]);
    }
    }
}
