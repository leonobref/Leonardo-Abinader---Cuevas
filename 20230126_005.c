#include <stdio.h>
#define n 5
void diagonalprincipal(int a[n][n]){
    int i, j;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (i == j)
            printf("%d ", a[i][j]);
            if (i != j)
            printf("  ");
        }
        printf("\n");
    }
}

void diagonalsecundaria(int a[n][n]){
    int i, j;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (j == n - 1 - i)
            printf("%d ", a[i][j]);
            else
            printf("  ");
        }
        printf("\n");
    }
}

void somaquartalinha(int a[n][n]){
    int i = 3, j, soma = 0;
    for (j = 0; j < n; j++)
    soma += a[i][j];
    printf("\nA soma dos elementos da quarta linha eh igual a: %d", soma);
}
void somasegundacoluna(int a[n][n]){
    int i, j = 1, soma = 0;
    for (i = 0; i < n; i++)
    soma += a[i][j];
    printf("\nA soma dos elementos da segunda coluna eh igual a: %d", soma);
}

void antidiagonalprincipal(int a[n][n]){
    int i, j;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (i != j)
            printf("%d ", a[i][j]);
            if (i == j)
            printf("  ");
        }
        printf("\n");
    }
}


int main(){
    int i, j, x;
    int a[n][n];
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Digite o numero da posicao %d %d da primeira matriz: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nDiagonal Principal da matriz: \n");
    diagonalprincipal(a);
    printf("\nDiagonal Secundaria da matriz: \n");
    diagonalsecundaria(a);
    somaquartalinha(a);
    somasegundacoluna(a);
    printf("\nMatriz exceto a Diagonal Principal: \n");
    antidiagonalprincipal(a);
    return 0;
}
