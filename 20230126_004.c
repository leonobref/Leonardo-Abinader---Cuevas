#include <stdio.h>
#define n 3
void achavalor(int a[n][n], int x){
    int i, j, aux = 0;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (a[i][j] == x){
                printf("O numero %d pode ser encontrado na posicao %d %d.\n", x, i + 1, j + 1);
                aux = 1;
            }
        }
    }
    if (aux == 0)
    printf("Numero %d nao encontrado.", x);
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
    printf("Digite um numero que sera buscado dentro da matriz: ");
    scanf("%d", &x);
    achavalor(a, x);

    return 0;
}
