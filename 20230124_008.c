#include <stdio.h>

void produtescalar(int v[],int w[], int tamanho){
    int i, soma = 0;
    for (i = 0; i < tamanho; i++){
        soma += v[i] * w[i];
    }
    printf("O Produto Escalar desses dois vetores eh: %d", soma);
}

int main(){
    int i, tamanho;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);
    int v[tamanho];
    int w[tamanho];
    for (i = 0; i < tamanho; i++){
        printf("Digite o %do numero do primeiro vetor: ", i+1);
        scanf("%d", &v[i]);
        printf("Digite o %do numero do segundo vetor: ", i+1);
        scanf("%d", &w[i]);
        }
  
    produtescalar(v, w, tamanho);
  }
