#include <stdio.h>

void selectionsort(int v[], int tamanho){
    int i, j, k;
    for (i = 0; i < tamanho; i++){
        for (j = i + 1; j < tamanho; j++){
            if (v[j] < v [i]){
            k = v[i];
            v[i] = v[j];
            v[j] = k;
            }
        }
        printf("%d ", v[i]);
    }
    
}

int main(){
    int i, tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int v[tamanho];
    for (i = 0; i < tamanho; i++){
        printf("Digite o %do numero do primeiro vetor: ", i+1);
        scanf("%d", &v[i]);
        }
  
    selectionsort(v, tamanho);
  }
