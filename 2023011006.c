#include <stdio.h>
#include <math.h>

void decimalbinario(int decimal){
    int pot = 1;
    int a = 0;
    while (pot*2 <= decimal)
    pot *= 2;
    printf("\nO binario do decimal %d eh: ",decimal);
    while (decimal > 0){
        printf("%d", decimal / pot);
        decimal = decimal % pot;
        pot =pot/2;
    }
}

int main(){
    int a;
    printf("Digite um numero decimal: ");
    scanf("%d", &a);
    decimalbinario(a);
}
