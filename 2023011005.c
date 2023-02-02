#include <stdio.h>
#include <math.h>

int binariodecimal(int a){
    int i = 0, decimal = 0;
    while (a != 0){
        if (a % 10 == 0)
            decimal += 0;
        if (a % 10 == 1)
            decimal += 1 * pow (2 , i);
    a = a /10;
    i++;
    }
    return decimal;
}

int pegabinario(){
    int binario, aux;
    printf("Digite um numero binario: ");
    scanf("%d", &binario);
    aux = binario;
    while (aux != 0){
        if (aux % 10 == 0 || aux % 10 == 1)
            aux = aux / 10;
        else{
        printf("\nDigite um numero binario: ");
        scanf("%d", &binario);
        aux = binario;
        }
    }
    return binario;
}

int main(){
    int a;
    a = pegabinario();
    printf("\nO decimal do binario %d eh %d", a, binariodecimal(a));
}
