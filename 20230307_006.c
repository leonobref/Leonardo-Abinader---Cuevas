#include <stdio.h>
int somaarrays(int *vetor1, int *vetor2, int tamanhovetor1, int tamanhovetor2, int *vetor3){
    if(tamanhovetor1 != tamanhovetor2)
    return 0;
    else{
        for (int i = 0; i < tamanhovetor1; i++)
            *(vetor3 + i) = *(vetor1 + i) + *(vetor2+i);
        return 1;
    }
}
int main()
{
    int tamanhoarray1, tamanhoarray2;
    printf("Digite o tamanho do array 1: ");
    scanf("%d", &tamanhoarray1);
    printf("Digite o tamanho do array 2: ");
    scanf("%d", &tamanhoarray2);
    int array1[tamanhoarray1];
    int array2[tamanhoarray2];
    for(int i = 0; i < tamanhoarray1; i++){
        printf("Digite o elemento %d da array 1: ", i+1);
        scanf("%d", (array1 + i));
    }
    for(int i = 0; i < tamanhoarray2; i++){
        printf("Digite o elemento %d da array 2: ", i+1);
        scanf("%d", (array2 + i));
    }
    int array3[tamanhoarray1];
    int valorretornado = somaarrays(array1,array2,tamanhoarray1,tamanhoarray2,array3);
    if (valorretornado == 0)
        printf("\nOperacao de soma nao realizada, as arrays devem ter o mesmo tamanho para serem somadas.\n");
    if (valorretornado == 1){
        printf("\nOperacao de soma realizada!\n");
    printf("Valores da Array resultante da soma: ");
    for (int i =0; i < tamanhoarray1; i++)
        printf("%d, ", *(array3 + i));
    }
    return 0;
}
