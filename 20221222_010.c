#include <stdio.h>

int main(){
    int num, i, j , cont, impar;
    printf("\nDigite um numero: ");
    scanf("%d", &num);
    for (i = 1; i <= num ; i++){
    cont = (i*i)-i;
    printf("\nOs impares consecutivos cujo a soma eh igual a %d^3 sao: ", i);
    for (j=1; j <= i*2; j++){
        cont++;
        if(cont % 2 !=0){
            impar = cont;
            printf("%d, ", impar);
        }
        }
    }
return 0;
}
