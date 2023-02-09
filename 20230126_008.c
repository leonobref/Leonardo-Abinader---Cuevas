#include <stdio.h>
void multiplicamatrizes(int la, int ca, int lb, int cb, int a[la][ca], int b[lb][cb], int c[la][cb]){
    int i, j, k;
    for (i = 0; i < la; i++)
      for (j = 0; j < cb; j++){
	    c[i][j] = 0;
        for (k = 0; k < la; k++) 
           c[i][j] = c[i][j] + a[i][k] * b[k][j];
      }
}

int main(){
    int la, ca, lb, cb, i, j;
    printf("Digite o numero de linhas da primeira matriz: ");
    scanf("%d", &la);
    printf("Digite o numero de colunas da primeira matriz: ");
    scanf("%d", &ca);
    printf("Digite o numero de linhas da segunda matriz: ");
    scanf("%d", &lb);
    printf("Digite o numero de linhas da primeira matriz: ");
    scanf("%d", &cb);
        if (ca != lb)
        printf("Nao eh possivel multiplicar matrizes dessas dimensoes.");
    else{
    int a[la][ca], b[lb][cb], c[la][cb];
    for(i = 0; i < la; i++){
        for(j = 0; j < ca; j++){
            printf("Digite o numero da posicao %d %d da primeira matriz: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < lb; i++){
        for(j = 0; j < cb; j++){
            printf("Digite o numero da posicao %d %d da segunda matriz: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }
    printf("A multiplicacao das duas matrizes eh: \n");
    multiplicamatrizes(la, ca, lb, cb, a, b, c);
    for (i = 0; i < la; i++) {
    for (j = 0; j < cb; j++)
	printf("%d ", c[i][j]);
    printf("\n");
    }
    return 0;
}
}
