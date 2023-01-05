#include <stdio.h>
int p;

void par() {
    int q;
    printf("Digite um numero par: ");
    scanf("%d", &q);
    if (q % 2 == 0)
    p = q;
    else
    for(;;){
    printf("Digite um numero par: ");
    scanf("%d", &q);
    if (q % 2 == 0){
    p = q;
    break;
    }
    }
}

void perfeito (int l){
    int i =1, s = 0,d;
    d= 2 * l ;
    while (i<=l)
    {  
    if(l % i == 0)
    s=s+i;
    i += 1;
    }
    if(s == d)
    printf("\n%d eh um numero perfeito ",l);
    else
    printf ("\n%d nao eh um numero perfeito",l);
}




int main()
{
    par();
    perfeito(p);
}
