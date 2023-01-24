#include <stdio.h>

void imprimirinversa(int v[], int tamanho){
    int i;
    for (i = tamanho -1; i >= 0; i--){
        printf("%d, ", v[i]);
    }
}

int tamanhovetor(){
    int a;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &a);
    return a;
}
int main(){
    int i, tamanho;
    tamanho = tamanhovetor();
    int v[tamanho];
    for (i = 0; i < tamanho; i++){
        printf("Digite o %do numero: ", i+1);
        scanf("%d", &v[i]);
    }
    imprimirinversa(v, tamanho);
}
