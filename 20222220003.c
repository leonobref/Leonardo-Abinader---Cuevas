#include <stdio.h>

int main(){
    int n=0,s=0,c=0;
    while(c < 50){
    printf("Digite um numero: ");
    scanf("%d", &n);
    if (n % 2 == 1){
        if (n > 100){
            if(n < 200){
                    s = s + n;
            }
        }

    }
    c = c + 1;
    }
    printf("\nSoma = %d", s);
}
