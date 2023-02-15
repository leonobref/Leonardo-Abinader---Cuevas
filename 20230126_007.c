#include <stdio.h>

int main()
{
    int n, i, j, k, cidade, cidade2, custofinal = 0;
    printf ("Digite uma ordem para as matrizes: ");
    scanf("%d", &n);
    int a[n][n];
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("Digite o numero da posicao %d %d da primeira matriz: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
    }
    }
    printf("A matriz dos intinerarios eh: \n");
    for (i = 0; i < n; i++){
        for(j = 0; j < n; j++)
        printf("%d ", a[i][j]);
        printf("\n");
    }
    printf("Digite o numero de cidades do intinerario: ");
    scanf("%d", &k);
    printf("Cidade %d: ", 1);
    scanf("%d", &cidade);
    for (i = 1; i < k; i++){
        printf("Cidade %d: ", i+1);
        scanf("%d", &cidade2);
        custofinal += a[cidade][cidade2];
            cidade = cidade2;
    }
    printf("O custo final do itinerario eh igual a: %d", custofinal);
    return 0;
}
