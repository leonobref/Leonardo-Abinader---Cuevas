#include <stdio.h>

int verifica(int x, int y){
    int z = 0;
    while(y != 0){
        if (x % 10 == y % 10){
            z = 1;
            while (x % 10 == y % 10){
            x = x / 10;
            y = y / 10;
            if(x == 0)
            break;
            if (x % 10 != y % 10){
            z = 0;
            }    
            }    
        }
        if (x % 10 != y % 10)
            y = y /10;
}
return z;
}

int main()
{
    int x, y, z;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &x);
    if (x > 0){
        printf("Digite outro numero inteiro positivo (Maior que o primeiro): ");
        scanf("%d", &y);
        if(y > 0){
            if(y > x){
                z = verifica(x,y);
                if (z == 1)
                printf("Eh segmento");
                if(z == 0)
                printf("Nao eh segmento");
}
            else
            printf("O segundo numero deve ser maior que o primeiro!");
}
        else
        printf("\nVoce nao digitou um numero positivo!");
}
    else
    printf("\nVoce nao digitou um numero positivo!");
return 0;
}
