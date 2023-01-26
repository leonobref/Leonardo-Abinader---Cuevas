#include <stdio.h>
#include <math.h>

int retornarinteiro(){
    int a;
    while(a <= 0){
        printf("Digite um numero inteiro positivo: ");
        scanf ("%d",&a);
    }
    return a;
}
int hiperfatorial(int a){
    int i, hf=1;
    for (i=0; i <=a; i++){
        hf *= pow (i,i);
    }
    return hf;
}

void printar(int a, int b){
    printf("Hiperfatorial(%d)= %d", a, b);
}

int main()
{
    int n, hipfat;
    n = retornarinteiro();
    printar(n, hiperfatorial(n));
}
