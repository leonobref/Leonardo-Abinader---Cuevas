#include <stdio.h>
#define NUM 3
int ordenarvalores(int *inicial, int *final){
    int k, igual;
    int *aux;
    for (int i =0; i < NUM-1; i++){
        aux = inicial;
    while(aux < final){
        if(*aux > *(aux +1)){
        k = *aux;
        *aux = *(aux + 1);
        *(aux + 1)= k;
        }
        aux++;
    }
    }
    for (int i = 1; i < NUM - 1 ; i++){
        if (*inicial == *(inicial + i))
        igual = 0;
        else{
            igual = 1;
            break;
        }
    }
    return igual;
}

int main()
{
    int a[NUM];
    int i;
    for(i=0;i<NUM;i++){
        printf("Numero inteiro %d: ", i+1);
        scanf("%d", (a+i));
    }
    int valorretornado = ordenarvalores(&a[0], &a[NUM-1]);
    printf("\nNumeros Odernados \n");
    for(i=0; i<NUM; i++)
        printf("%d, ", a[i]);
    if (valorretornado == 0)
    printf("\nTodos os numeros sao iguais, valor retornado igual a 0.");
    if (valorretornado == 1)
    printf("\nExistem numeros diferentes, valor retornado igual a 1.");
    return 0;
}
