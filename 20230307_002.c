#include <stdio.h>

int *func_exc2(int *arr, int valor, int *fim){
    for(arr; arr <= fim; arr++){
        if (*arr == valor){
            return arr;
        }
    }
    return NULL;
}
int main(){
    int a[]={4,2,5,7,2,8,9,2,10,1};
    int *inteiro;

    inteiro = func_exc2(a,2,&a[9]);

    if(inteiro != NULL)
        printf("\nValor: %d no endereco %d", *inteiro, inteiro);
    else
        printf("\nValor nao achado");
    while (inteiro != NULL){
        inteiro = func_exc2((inteiro + 1), 2, &a[9]);
        if(inteiro != NULL)
        printf("\nValor: %d no endereco %d", *inteiro, inteiro);
    }
    return 0;
}
