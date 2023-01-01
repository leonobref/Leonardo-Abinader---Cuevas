#include <stdio.h>

int main(){
    int num,c=0, i = 1;
    printf("Digite um numero: ");
    scanf("%d", &num);
    while(i <= num)
    {
        if(num % i == 0){
            c += 1;
        }
    i += 1;
    }
    if(c == 2)
    printf("Primo");
    else
    printf("Nao primo");
}
