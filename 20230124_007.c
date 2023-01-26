#include <stdio.h>

void numocorrencia(int v[], int tamanho){
    int i;
    int soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0, soma5 = 0, soma6 = 0;
    for (i = 0; i < tamanho; i++){
        if (v[i] == 6)
        soma6 += 1;
        if (v[i] == 5)
        soma5 += 1;
        if (v[i] == 4)
        soma4 += 1;
        if (v[i] == 3)
        soma3 += 1;
        if (v[i] == 2)
        soma2 += 1;
        if (v[i] == 1)
        soma1 += 1;
    }
    printf("\nA quantidade de 1 foi: %d", soma1);
    printf("\nA quantidade de 2 foi: %d", soma2);
    printf("\nA quantidade de 3 foi: %d", soma3);
    printf("\nA quantidade de 4 foi: %d", soma4);
    printf("\nA quantidade de 5 foi: %d", soma5);
    printf("\nA quantidade de 6 foi: %d", soma6);
}

int main(){
    int a, i, tamanho;
    printf("Digite o numero de lancamentos do dado: ");
    scanf("%d", &tamanho);
    int v[tamanho];
    for (i = 0; i < tamanho; i++){
        printf("Digite o %do resultado de lancamento do dado: ", i+1);
        scanf("%d", &a);
        if (a >= 1 && a <= 6){
            v[i] = a;
        }
        else{
            printf("ERRO, o dado so tem 6 lados!");
            break;
        }    
    }
    numocorrencia(v, tamanho);

}
