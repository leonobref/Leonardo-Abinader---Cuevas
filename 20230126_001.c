#include <stdio.h>
#define lin 3
#define col 5

void somamatrizes(int a[lin][col], int b[lin][col]){
    int c[lin][col];
    int i, j;
    for (i = 0; i < lin; i++){
        for (j = 0; j < col; j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int a[lin][col], b[lin][col], i, j;
    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("Digite o numero da posicao %d %d da primeira matriz: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < lin; i++){
        for(j = 0; j < col; j++){
            printf("Digite o numero da posicao %d %d da segunda matriz: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    printf("A soma das duas matrizes eh: \n");
    somamatrizes(a, b);
    
    return 0;
}
