#include <stdio.h>

void somamatrizes(int n, int a[n][n], int b[n][n]){
    int c[n][n];
    int i, j;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n, i, j;
    printf ("Digite uma ordem para as matrizes: ");
    scanf("%d", &n);
    int a[n][n], b[n][n];
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Digite o numero da posicao %d %d da primeira matriz: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Digite o numero da posicao %d %d da segunda matriz: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    printf("A soma das duas matrizes eh: \n");
    somamatrizes(n, a, b);

    return 0;
}
