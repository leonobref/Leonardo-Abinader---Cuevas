#include <stdio.h>
#define n 3
void multiplicaescalar(int a[n][n], int k){
    int c[n][n];
    int i, j;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            c[i][j] = a[i][j] * k;
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int i, j, k;
    int a[n][n];
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Digite o numero da posicao %d %d da primeira matriz: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Digite um escalar pelo qual a matriz sera multiplicada: ");
    scanf("%d", &k);
    printf("A multiplicacao da matriz pelo escalar %d eh: \n", k);
    multiplicaescalar(a, k);

    return 0;
}
