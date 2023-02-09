#include <stdio.h>
#define n 5
int somadiagonalprincipal(int a[n][n]){
    int i, j, soma = 0;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (i == j)
            soma += a[i][j];
        }
    }
    return soma;
}

int somadiagonalsecundaria(int a[n][n]){
    int i, j, soma = 0;
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (j == n - 1 - i)
            soma += a[i][j];
        }
    }
    return soma;
}


int main(){
    int i, j, x, soma, soma1, soma2, aux;
    int a[n][n];
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Digite o numero da posicao %d %d da primeira matriz: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    soma = somadiagonalprincipal(a);
    if (somadiagonalsecundaria(a) == soma){
    for (i = 0; i < n; i++) {
    soma1 = 0;
    soma2 = 0;
    for (j = 0; j < n; j++){
        soma1 += a[i][j];
        soma2 += a[j][i];
        }
        if (soma1 == soma2 || soma2 == soma)
            aux = 1;
        else{
            aux = 0;
            break;
        }
    }
    }
    else 
    aux = 0;

    if(aux == 0)
    printf("A matriz nao eh um quadrado magico.");
    else if(aux == 1)
    printf("A matriz eh um quadrado magico.");
    return 0;
}
