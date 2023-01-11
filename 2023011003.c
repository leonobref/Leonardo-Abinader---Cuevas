#include <stdio.h>

int verifica(int x, int y){
    int z, a, b;
    a = y;
    b = x;
    while(a != 0){
        if (b % 10 == a % 10){
            z = 1;
            a = a / 10;
            b = b / 10;
}
        else{
        z = 0;
        break;
}
}
return z;
}

int main()
{
    int x, y, z;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &x);
    if (x > 0){
        printf("Digite outro numero inteiro positivo: ");
        scanf("%d", &y);
        if(y > 0){
            z = verifica(x,y);
            if(z == 0)
            printf("\nNao corresponde.");
            if(z == 1)
            printf("\nCorresponde.");
}
        else
        printf("\nVoce nao digitou um numero positivo!");
}
    else
    printf("\nVoce nao digitou um numero positivo!");
return 0;
}
